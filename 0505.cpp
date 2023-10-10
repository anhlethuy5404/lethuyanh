#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string maNV, name, gender, dateBirth, address, maThue, date;
};

void nhap (NhanVien &a){
    a.maNV = "00001";
    getline (cin, a.name);
    cin >> a.gender >> a.dateBirth;
    cin.ignore();
    getline (cin, a.address);
    cin >> a.maThue >> a.date;
}

void in (NhanVien a){
    cout << a.maNV << " " << a.name << " " << a.gender << " " << a.dateBirth << " " << a.address << " " << a.maThue << " " << a.date;
}

int main (){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}