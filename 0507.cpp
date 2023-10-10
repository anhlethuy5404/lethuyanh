#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo {
    ll tu, mau;
};

void nhap (PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutGon (PhanSo &p){
    ll c = __gcd(p.tu, p.mau);
    p.tu /= c;
    p.mau /= c;
}

PhanSo tong (PhanSo p, PhanSo q){
    rutGon(p);
    rutGon(q);
    PhanSo t;
    t.tu = p.tu * q.mau + p.mau * q.tu;
    t.mau = p.mau * q.mau;
    rutGon (t);
    return t;
}

void in (PhanSo t){
    cout << t.tu << "/" << t.mau;
}

int main (){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}