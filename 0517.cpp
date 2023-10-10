#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string id, name, gender, dob, address, tax, date;
};

string id (int i){
    string r = to_string(i+1);
    while (r.length() < 5){
        r = '0' + r;
    }
    return r;
}

void nhap(NhanVien &a) {
    scanf ("\n");
    getline (cin, a.name);
    getline (cin, a.gender);
    getline (cin, a.dob);
    getline (cin, a.address);
    getline (cin, a.tax);
    getline (cin, a.date);
}

void inds (NhanVien a[], int N){
    for (int i=0; i<N; i++){
        cout << id(i) << " ";
        cout << a[i].name << " " << a[i].gender << " " << a[i].dob << " " << a[i].address << " " << a[i].tax << " " << a[i].date << endl;
    }
}

int main (){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}