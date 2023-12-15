#include<bits/stdc++.h>
using namespace std;

string NgaySinh (string s){
    string tmp;
    vector <string> v;
    stringstream ss(s);
    while(getline(ss, tmp, '/')){
        v.push_back(tmp);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i].length() < 2) v[i] = '0' + v[i];
    }
    return v[0] + '/' + v[1] + '/' + v[2];
}

string HoTen(string s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
    string tmp;
    stringstream ss(s);
    vector <string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i=0; i<v.size(); i++){
        v[i][0] = toupper(v[i][0]);
    }
    string str = "";
    for(int i=0; i<v.size(); i++){
        str = str + v[i] + " ";
    }
    str.pop_back();
    return str;
}

class SinhVien{
    public:
    string ma, ten, lop, dob;
    float gpa;
    friend istream &operator >> (istream &is, SinhVien &a) {
        getline(cin, a.ten);
        cin >> a.lop >> a.dob >> a.gpa;
        a.ma = "B20DCCN001";
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien a){
        cout << a.ma << " " << HoTen(a.ten) << " " << a.lop << " " << NgaySinh(a.dob) << " " << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}