#include <bits/stdc++.h>

using namespace std;

struct matHang {
    int maMH;
    float giaMua, giaBan, loiNhuan;
    string tenMH, nhomMH;
};

void nhap (matHang &mh){
    scanf ("\n");
    getline (cin, mh.tenMH);
    getline (cin, mh.nhomMH);
    cin >> mh.giaMua >> mh.giaBan;
    mh.loiNhuan = mh.giaBan - mh.giaMua;
}

bool cmp (matHang a, matHang b){
    return a.loiNhuan > b.loiNhuan;
}

void sapxep (matHang mh[], int n){
    sort (mh, mh + n, cmp);
}

void xuat (matHang mh){
    cout << mh.maMH << " " << mh.tenMH << " " << mh.nhomMH << " " << fixed << setprecision(2) << mh.loiNhuan << endl;
}

int main (){
    int n;
    cin >> n;
    struct matHang mh[n];
    for (int i=0; i<n; i++){
        nhap(mh[i]);
        mh[i].maMH = i+1;
    }
    sapxep (mh, n);
    for (int i=0; i<n; i++){
        xuat (mh[i]);
    }
}