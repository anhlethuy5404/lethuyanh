#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string maSV, ten, lop;
    float diem1, diem2, diem3;

};

void nhap(SinhVien &sv){
    cin.ignore();
    getline (cin, sv.maSV);
    getline (cin, sv.ten);
    getline (cin, sv.lop);
    cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

bool cmp (SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

void sap_xep (SinhVien sv[], int n){
    sort (sv, sv + n, cmp);
}

void in_ds (SinhVien sv[], int n){
    for (int i=0; i<n; i++){
        cout << i+1 << " " << sv[i].maSV << " " << sv[i].ten << " " << sv[i].lop << " ";
        cout << fixed << setprecision(1) << sv[i].diem1 << " " << sv[i].diem2 << " " << sv[i].diem3 << endl;
    }
}

int main (){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}