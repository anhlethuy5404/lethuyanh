#include <bits/stdc++.h>
using namespace std;

string chuanHoa (string s){
    string tmp, str = "";
    stringstream ss(s);
    while (ss >> tmp){
        transform (tmp.begin(), tmp.end(), tmp.begin(), :: tolower);
        tmp[0] = toupper(tmp[0]);
        str += tmp + " ";
    }
    str.pop_back();
    return str;
}

string ngaySinh (string &s){
    if(s[2]!='/') s = '0' + s;
    if (s[5]!='/') s = s.substr(0,3) + '0' + s.substr(3);
    return s;
}

class SinhVien {
    public: 
        string ma, ten, lop, ngay;
        float gpa;
    friend istream &operator >> (istream &is, SinhVien &a){
        a.ma = "B20DCCN001";
        getline(is, a.ten);
        is >> a.lop >> a.ngay >> a.gpa;
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien a){
        cout << a.ma << " " << chuanHoa(a.ten) << " " << a.lop << " " << ngaySinh(a.ngay) << " " << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
/*
NguyEn hoa BiNH
D20CQCN04-B
2/2/2002
2
*/