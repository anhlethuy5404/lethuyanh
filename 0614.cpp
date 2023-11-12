#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien{
    public:
    string ma, ten, gt, dob, diachi, mst, ngay;

    friend istream &operator >> (istream &is, NhanVien &a){
        cin.ignore();
        getline(cin, a.ten);
        getline(cin, a.gt);
        getline(cin, a.dob);
        getline(cin, a.diachi);
        cin >> a.mst >> a.ngay;
        //nhap ma
        string MA = to_string(stt);
        while(MA.length()<5){
            MA = '0' + MA;
        }
        a.ma = MA;
        stt++;
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien a){
        cout << a.ma << " " << a.ten << " " << a.gt << " " << a.dob << " " << a.diachi << " " << a.mst << " " << a.ngay << endl;
        return os;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}