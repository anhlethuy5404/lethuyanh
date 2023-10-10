#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string identity, name, gender, dob, address, tax, date;
    int d, m, y;
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
    vector <string> v;
    stringstream ss (a.dob);
    string tmp;
    while (getline(ss, tmp, '/')){
        v.push_back (tmp);
    }
    //dob dang mm/dd/yy
    a.m = stoi (v[0]);
    a.d = stoi (v[1]);
    a.y = stoi (v[2]);
}

bool cmp (NhanVien a, NhanVien b){
    if (a.y < b.y) return 1;
    else if (a.y == b.y){
        if (a.m < b.m) return 1;
        else if (a.m == b.m){
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}

void sapxep (NhanVien a[], int N){
    for (int i=0; i<N; i++){
        a[i].identity = id(i);
    }
    sort (a, a+N, cmp);
}

void inds (NhanVien a[], int N){
    for (int i=0; i<N; i++){
        cout << a[i].identity << " " << a[i].name << " " << a[i].gender << " " << a[i].dob << " " << a[i].address << " " << a[i].tax << " " << a[i].date << endl;
    }
}

int main (){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}