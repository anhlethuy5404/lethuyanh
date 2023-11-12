#include <bits/stdc++.h>
using namespace std;

int ma = 1;

void vietThuong (string &s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoa (string &s){
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for (int i=0; i<v.size(); i++){
        vietThuong(v[i]);
        v[i][0] = toupper(v[i][0]);
    }
    s = v[0];
    for(int i=1; i<v.size(); i++){
        s += " " + v[i];
    }
}

class SinhVien{
    public:
        string id, ten, lop, dob;
        float gpa;
    
        friend istream &operator >> (istream &is, SinhVien &a){
            scanf("\n");
            getline(is, a.ten);
            is >> a.lop >> a.dob >> a.gpa;
            chuanHoa(a.ten);
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
            os << a.id << " " << a.ten << " " << a.lop << " " << a.dob  << " " << fixed << setprecision(2) << a.gpa << endl;
            return os;
        }
};

bool cmp (SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N){
    sort(ds, ds+N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}