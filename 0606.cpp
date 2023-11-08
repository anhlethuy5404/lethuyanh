#include <bits/stdc++.h>
using namespace std;

class NhanVien {
    private:
        string ma, ten, gt, dob, address, mst, ngay;
    public:
        void nhap(){
            //cin.ignore();
            getline(cin, ten);
            getline(cin, gt);
            getline(cin, dob);
            getline(cin, address);
            getline(cin, mst);
            getline(cin, ngay);
        }
        void xuat(){
            cout << "00001 " << ten << " " << gt << " " << dob << " " << address << " " << mst << " " << ngay << endl;
        }

};

int main(){
    NhanVien a;
    //cin >> a;
    a.nhap();
    //cin >> a;
    a.xuat();
    return 0;
}