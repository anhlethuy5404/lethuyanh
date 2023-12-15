#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien{
    string ma, ten, chucvu;
    ll ngay;
    double coban;
    double thang, thuong, phucap, thunhap;
    void nhap(){
        getline(cin, ten);
        cin >> coban >> ngay >> chucvu;
    }
    void xuat(){
        ma = "NV01";
        thang = coban*(double)ngay;
        if(ngay >= 25) thuong = 0.2 * thang;
        else if(ngay >=22 && ngay <25) thuong = 0.1 * thang;
        else thuong = 0;
        if(chucvu == "GD") phucap = 250000;
        else if(chucvu =="PGD") phucap = 200000;
        else if(chucvu == "TP") phucap = 180000;
        else phucap = 150000;
        thunhap = thang + thuong + phucap;
        cout << ma << " " << ten << " " << (ll)thang << " " << (ll)thuong << " " <<(ll)phucap << " " <<(ll)thunhap; 
    }
};

int main(){
    NhanVien nv;
    nv.nhap();
    nv.xuat();
}