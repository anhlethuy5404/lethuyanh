#include<bits/stdc++.h>
using namespace std;

map <string, string> mp;
int k = 1;
class TheLoai{
    public:
    string ma, name;
    friend istream &operator >> (istream &is, TheLoai &a){
        //ma
        string idx = to_string(k);
        while(idx.length() < 3){
            idx = '0' + idx;
        }
        a.ma = "TL" + idx;
        //nhap
        getline(is, a.name);
        mp[a.ma] = a.name;
        ++k;
        return is;
    }
};

int j=1;
int cv (string &s){
    int res=0;
    for(int i : s) res = res*10 + (i-'0');
    return res;
}
class Phim{
    public:
    string ma, name, date, tap, tl, code;
    int soTap, ngay, thang, nam;
    friend istream &operator >> (istream &is, Phim &a){
        //ma
        string j0 = to_string(j);
        while(j0.length() < 3){
            j0 = '0' + j0;
        }
        a.code = "P" + j0;
        string s1, s2;
        getline(is, a.ma);
        a.tl=mp[a.ma];
        getline(is, a.date);
        getline(is, a.name);
        getline(is, a.tap);
        stringstream ss2(a.date);
        getline(ss2, s2, '/');
        a.ngay = cv(s2);
        getline(ss2, s2, '/');
        a.thang = cv(s2);
        getline(ss2, s2, '/');
        a.nam = cv(s2);
        a.soTap = cv(a.tap);
        ++j;
        return is;
    }
    friend ostream &operator << (ostream &os, Phim &a){
        cout << a.code << " " << a.tl << " " << a.date << " " << a.name << " " << a.tap << endl;
        return os;
    }
};


bool cmp(Phim &a, Phim &b){
    if(a.nam > b.nam) return 0;
    if(a.nam < b.nam) return 1;
    if(a.thang > b.thang) return 0;
    if(a.thang < b.thang) return 1;
    if(a.ngay > b.ngay) return 0;
    if(a.ngay < b.ngay) return 1;
    if(a.name > b.name) return 0;
    if(a.name < b.name) return 1;
    if(a.soTap < b.soTap) return 0;
    if(a.soTap > b.soTap) return 1;
    return 0;
}

void sapxep (TheLoai mh[], int n, Phim a[], int m){
    sort(a, a+m, cmp);
}

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for(int i=0; i<n; i++){
        cin >> tl[i];
    }
    for(int i=0; i<m; i++){
        cin >> p[i];
    }
    sapxep(tl, n, p, m);
    for(int i=0; i<m; i++){
        cout << p[i];
    }
}