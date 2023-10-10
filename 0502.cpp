#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
    string name;
    string ngaysinh;
    float diem1, diem2, diem3;
};

void nhap (ThiSinh &ts){
    getline (cin, ts.name);
    cin >> ts.ngaysinh;
    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;
}

void in (ThiSinh ts){
    cout << ts.name << " " << ts.ngaysinh << " " << fixed << setprecision(1) << (float) (ts.diem1+ts.diem2+ts.diem3);
}

int main (){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}