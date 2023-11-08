#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo {
    ll tu, mau;
};

void chuanHoa (PhanSo &A){
    if(A.mau < 0) {
        A.mau = A.mau * (-1);
        A.tu = A.tu * (-1);
    }
}

void rutGon (PhanSo &A){
    chuanHoa(A);
    ll tmp=__gcd(A.mau, A.tu);
    if (tmp!=1) {
        A.mau /= tmp;
        A.tu /= tmp;
    }
}

void process (PhanSo A, PhanSo B){
    PhanSo C;
    PhanSo D;
    rutGon(A); rutGon(B);
    ll mc = A.mau / __gcd(A.mau, B.mau) * B.mau;
    ll ts1 = mc / A.mau * A.tu;
    ll ts2 = mc / B.mau * B.tu;
    //cout << mc  << " " << ts1 << " " << ts2 << " " << endl;
    C.mau = mc*mc;
    C.tu = (ts1+ts2)*(ts1+ts2);
    D.mau = A.mau * B.mau * C.mau;
    D.tu = A.tu * B.tu * C.tu;
    rutGon(C); rutGon(D);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}

int main(){
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}