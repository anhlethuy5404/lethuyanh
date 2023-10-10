#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string ten, lop, ngaySinh;
    float gpa;
};

string maSV (int i){
    string r = to_string(i+1);
    while (r.length() < 3){
        r = '0' + r;
    }
    return "B20DCCN" + r;
}

void nhap (SinhVien sv[], int N){
    for (int i=0; i<N; i++){
        scanf ("\n");
        getline (cin, sv[i].ten);
        cin >> sv[i].lop >> sv[i].ngaySinh >> sv[i].gpa;
    } 
}

string chuanHoa (string s){
    string tmp;
    vector <string> v;
    stringstream ss(s);
    while (getline(ss, tmp, '/')){
        v.push_back(tmp);
    }
    for (int i=0; i<v.size(); i++){
        if (v[i].length() < 2) v[i] = '0' + v[i];
    } 
    return v[0] + '/' + v[1] + '/' + v[2];
}

void in (SinhVien sv[], int N){
    for (int i=0; i<N; i++){
        cout << maSV(i) << " " << sv[i].ten << " " << sv[i].lop << " " << chuanHoa(sv[i].ngaySinh) << " " << fixed << setprecision(2) << sv[i].gpa << endl;
    }
}

int main (){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}