#include<bits/stdc++.h>
using namespace std;

int n,m;
int dem=1;
class Team{
    public:
    string ma, ten1, ten2;
        friend istream &operator >> (istream &is, Team &a){
            //is.ignore();
            getline(is, a.ten1);
            getline(is, a.ten2);
            string k=to_string(dem);
            while(k.length()<2){
                k='0'+k;
            }
            a.ma="Team"+k;
            dem++;
            return is;
        }
};

int dem2=1;
class ThiSinh{
    public:
    string code, ten, team, tenteam, tentruong;
        friend istream &operator >> (istream &is, ThiSinh &a){
            is.ignore();
            getline(is, a.ten);
            is >> a.team;
            string h=to_string(dem2);
            while(h.length()<3){
                h='0'+h;
            }
            a.code="C"+h;
            Team b[n];
            for(int i=0; i<n; i++){
            if(b[i].ma==a.team){
                a.tenteam = b[i].ten1;
                a.tentruong = b[i].ten2;
            }
            }
            dem2++;
            return is;
        }
        friend ostream &operator << (ostream &os, ThiSinh a){
            os << a.code << " " << a.ten << " " << a.tenteam << " " << a.tentruong << endl;
            return os;
        }
};

bool cmp(ThiSinh a, ThiSinh b){
    return a.ten < b.ten;
}

void sapxep(ThiSinh a[], int n){
    sort(a, a+n, cmp);
}

int main(){
    cin >> n >> m;
    Team a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    ThiSinh b[m];
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sapxep(b, m);
    for(int i=0; i<m; i++){
        cout << b[i];
    }
}