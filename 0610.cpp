#include <bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo {
    private:
        ll tu, mau;
    public:
        PhanSo(){

        }
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        void rutGon(){
            ll u = __gcd(tu, mau);
            mau/=u;
            tu/=u;
        }
        friend istream &operator >> (istream &is, PhanSo &a){
            cin >> a.tu >> a.mau;
            return is;
        }
        friend ostream &operator << (ostream &os, PhanSo a){
            cout << a.tu << "/" << a.mau << endl;
            return os;
        }
        PhanSo operator + (PhanSo b){
            PhanSo kq;
            kq.mau = this->mau * b.mau;
            kq.tu = this->tu * b.mau + this->mau * b.tu;
            kq.rutGon();
            return kq;
        }
};

int main(){
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}