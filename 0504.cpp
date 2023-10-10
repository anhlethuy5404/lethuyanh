#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string maSV, ten, lop, ngaysinh;
    float gpa;
};

void nhap(SinhVien &sv){
    sv.maSV = "B20DCCN001";
    getline (cin, sv.ten);
    cin >> sv.lop >> sv.ngaysinh >> sv.gpa;
}

void in (SinhVien sv){
    //chuan hoa ngay sinh
    if (sv.ngaysinh.size()==8){
        sv.ngaysinh = '0' + sv.ngaysinh.substr(0,2) + '0' + sv.ngaysinh.substr(2);
        //str = "Hello world"
        //str.substr(start, length) 
        //str.substr(0,3) --> Hel
    }
    else if (sv.ngaysinh.size()==9){
        if (sv.ngaysinh[1]=='/')
            sv.ngaysinh = '0' + sv.ngaysinh;
        else sv.ngaysinh = sv.ngaysinh.substr(0,3) + '0' + sv.ngaysinh.substr(3);
        //11/2/2004 -> 11/02/2004
    }
    //in ra
    cout << sv.maSV << " " << sv.ten << " " << sv.lop << " " << sv.ngaysinh << " " << fixed << setprecision(2) << sv.gpa;
}

int main (){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}