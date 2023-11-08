#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
    string ma, name, lop, dob;
    float gpa;
    friend istream &operator >> (istream &is, SinhVien &a) {
        getline(cin, a.name);
        cin >> a.lop >> a.dob >> a.gpa;
        a.ma = "B20DCCN001";
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien a){
        string tmp;
        vector <string> v;
        stringstream ss(a.dob);
        while(getline(ss, tmp, '/')){
            v.push_back(tmp);
        }
        for (int i=0; i<v.size(); i++){
            if (v[i].length() < 2) v[i] = '0' + v[i];
        }
        a.dob=v[0]+'/'+v[1]+'/'+v[2];
        cout << a.ma << " " << a.name << " " << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}