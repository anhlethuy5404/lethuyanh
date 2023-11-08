#include <bits/stdc++.h>
using namespace std;
struct DanhSach{
    string name, dob;
    int ngay, thang, nam;
    void nhap(){
        cin >> name >> dob;
        string tmp;
        stringstream ss(dob);
        vector <string> v;
        while(getline(ss, tmp, '/')){
            v.push_back(tmp);
        }
        for (int j=0; j<v.size(); j++){
            ngay = stoi(v[0]);
            thang = stoi(v[1]);
            nam = stoi(v[2]);
        }
    }
};

bool cmp(DanhSach A, DanhSach B){
    if (A.nam > B.nam) return 1;
    else if (A.nam == B.nam){
        if (A.thang > B.thang) return 1;
        else if (A.thang == B.thang){
            if (A.ngay > B.ngay) return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    DanhSach ds[t];
    for (int i=0; i<t; i++){
        ds[i].nhap();
    }
    sort (ds, ds+t, cmp);
    cout << ds[0].name << '\n' << ds[t-1].name << endl;
}
