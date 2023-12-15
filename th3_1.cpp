#include<bits/stdc++.h>
using namespace std;

struct Sodt{
    string ten, sdt, ngay;
    string ten_dau, ten_dem, ho;
};

bool cmp (Sodt a, Sodt b){
    if(a.ngay == b.ngay){
        if(a.ho < b.ho) return 1;
        else if(a.ho == b.ho){
            if(a.ten_dau < b.ten_dau) return 1;
            else if(a.ten_dau == b.ten_dau){
                if(a.ten_dem < b.ten_dem) return 1;
            }
        }
    }
    return 0;
}

int main(){
    ifstream fp1;
    ofstream fp2;
    fp1.open("SOTAY.txt");
    fp2.open("DIENTHOAI.txt");
    vector <Sodt> v;
    string line, ten, sdt, ngay;
    string ten_dau, ten_dem, ho;
    while(getline(fp1, line)){
        if(!line.empty()){
            if(line.substr(0,4) == "Ngay"){
                ngay = line.substr(5);
            }
            else{
                ten = line;
                vector <string> v1;
                stringstream ss(ten);
                string tmp;
                while(ss >> tmp){
                    v1.push_back(tmp);
                }
                ten_dau = v1[v1.size()-1];
                ho = v1[0];                
                ten_dem=v1[1];
                if(v1.size()>3){
                    for(int i=2; i<v1.size()-1; i++) ten_dem+=' '+v1[i];
                }
                getline(fp1, sdt);            
                v.push_back({ten, sdt, ngay, ten_dau, ten_dem, ho});
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        fp2 << x.ten << ": " << x.sdt << " " << x.ngay << endl;
    }
    fp2.close();
    fp1.close();
}