#include <bits/stdc++.h>
using namespace std;

int ma = 1;

class SinhVien{
    private:
        string id, ten, lop, dob;
        float gpa;
    public:
        friend istream &operator >> (istream &is, SinhVien &a){
            is.ignore();
            getline(cin, a.ten);
            cin >> a.lop >> a.dob >> a.gpa;
            //ma sinh vien
            string MA = to_string(ma);
            while(MA.length() < 3){
                MA = '0' + MA;
            }
            a.id = "B20DCCN" + MA;
            ma++;
            //ngay sinh
            if (a.dob[2] != '/') a.dob = '0' + a.dob;
            if (a.dob[5] != '/') a.dob = a.dob.substr(0,3) + '0' + a.dob.substr(3);
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            cout << a.id << " " << a.ten << " " << a.lop << " " << a.dob  << " " << fixed << setprecision(2) << a.gpa << endl;
            return os;
        }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}