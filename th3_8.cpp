#include<bits/stdc++.h>
#define ll long long
using namespace std;

string trang(int i){
    string s = "Page " + to_string(i);
    return s;
}

int main(){
    vector<string> v;
    string s;
    ifstream fp1 ("VANBAN.txt");
    ofstream fp2 ("MUCLUC.txt");
    while(getline(fp1,s)){
        v.push_back(s);
    }
    int k, a;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i].find("Level", 0)==0){
            k=i;
            a=v[i][5]-'0';
            break;
        }
    }
    int p=1, q=1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==trang(p+1) || i+1==v.size()){
            for(int j=q; j<i; j++){
                string v1="Level1:", v2="Level2:", v3="Level3:";
                if(v[j].find(v1,0)==0){
                    if(j==k&&a==1){
                        v[j].erase(0,8);
                        fp2 << ">" << v[j] << "--- " << p;
                    }
                    else{
                        v[j].erase(0,8);
                        fp2 << ">" << v[j] << "--- " << p << endl;
                    }
                }
                if(v[j].find(v2,0)==0){
                    if(j==k&&a==2){
                        v[j].erase(0,8);
                        fp2 << ">>" << v[j] << "--- " << p;
                    }
                    else{
                        v[j].erase(0,8);
                        fp2 << ">>" << v[j] << "--- " << p << endl;
                    }
                }
                if(v[j].find(v3,0)==0){
                    if(j==k&&a==3){
                        v[j].erase(0,8);
                        fp2 << ">>>" << v[j] << "--- " << p;
                    }
                    else{
                        v[j].erase(0,8);
                        fp2 << ">>>" << v[j] << "--- " << p << endl;
                    }
                }
            }
            p++;
            q=i+1;
        }
    }
    fp1.close();
    fp2.close();
}