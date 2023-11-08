#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
    string ma, name, lop, dob;
    float gpa;
    void nhap(){
        //cin.ignore();
        getline(cin, name);
        cin >> lop >> dob >> gpa;
        ma = "B20DCCN001";
    }
    void xuat(){
        string tmp;
        vector <string> v;
        stringstream ss(dob);
        while(getline(ss, tmp, '/')){
            v.push_back(tmp);
        }
        for (int i=0; i<v.size(); i++){
            if (v[i].length() < 2) v[i] = '0' + v[i];
        }
        dob=v[0]+'/'+v[1]+'/'+v[2];
        cout << ma << " " << name << " " << lop << " " << dob << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}