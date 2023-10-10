#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string maSV, ten, lop, ngaysinh;
    float gpa;
};

void nhapThongTinSV (SinhVien &sv){
    sv.maSV = "N20DCCN001";
    getline (cin, sv.ten);
    cin >> sv.lop >> sv.ngaysinh >> sv.gpa;
}

void inThongTinSV (SinhVien sv){
    //chuan hoa ngay sinh
    if (sv.ngaysinh.size()==8){
        sv.ngaysinh = '0' + sv.ngaysinh.substr(0,2) + '0' + sv.ngaysinh.substr(2);
    }
    else if (sv.ngaysinh.size()==9){
        if (sv.ngaysinh[1]=='/')
            sv.ngaysinh = '0' + sv.ngaysinh;
        else sv.ngaysinh = sv.ngaysinh.substr(0,3) + '0' + sv.ngaysinh.substr(3);
    }
    //in ra
    cout << sv.maSV << " " << sv.ten << " " << sv.lop << " " << sv.ngaysinh << " " << fixed << setprecision(2) << sv.gpa;
}

int main (){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}