#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string ma, ten, lop, ngaySinh;
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
        sv[i].ma = maSV(i);
        scanf ("\n");
        getline (cin, sv[i].ten);
        cin >> sv[i].lop >> sv[i].ngaySinh >> sv[i].gpa;
    } 
}

string chuanHoaNgaySinh (string s){
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

string chuanHoaTen (string s){
    for (int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
    string tmp;
    stringstream ss(s);
    vector <string> v;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    for (int i=0; i<v.size(); i++){
        v[i][0] = toupper (v[i][0]);
    }
    string str = "";
    for (int i=0; i<v.size(); i++){
        str = str + v[i] + " ";
    }
    str.pop_back(); //xoa ki tu cuoi cung
    return str;
}

bool cmp (SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep (SinhVien sv[], int N){
    sort (sv, sv+N, cmp);
}

void in (SinhVien sv[], int N){
    for (int i=0; i<N; i++){
        cout << sv[i].ma << " " << chuanHoaTen(sv[i].ten) << " " << sv[i].lop << " " << chuanHoaNgaySinh(sv[i].ngaySinh) << " " << fixed << setprecision(2) << sv[i].gpa << endl;
    }
}

int main (){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}