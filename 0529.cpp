#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    int stt;
    string maSV, ten, lop, email, doanhNghiep;

};

void nhap(SinhVien &a){
    getline (cin, a.maSV);
    getline (cin, a.ten);
    getline (cin, a.lop);
    getline (cin, a.email);
    getline (cin, a.doanhNghiep);
}

void xuat(SinhVien a){
    cout << a.stt << " " << a.maSV << " " << a.ten << " " << a.lop << " " << a.email << " " << a.doanhNghiep << endl;
}

bool cmp (SinhVien a, SinhVien b){
    return a.maSV < b.maSV;
}

int main (){
    int n;
    cin >> n;
    cin.ignore();
    struct SinhVien sv[n];
    for (int i=0; i<n; i++){
        sv[i].stt = i+1;
        nhap (sv[i]);
    }
    sort (sv, sv + n, cmp);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        for (int i=0; i<n; i++){
            if (sv[i].doanhNghiep == s){
                xuat (sv[i]);
            }
        }
    }
}