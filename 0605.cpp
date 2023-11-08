#include <bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
    private:
        ll mau, tu;
    public:
        PhanSo(ll t, ll m){
            mau = m;
            tu = t;
        }
        void rutgon(){
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
};

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}