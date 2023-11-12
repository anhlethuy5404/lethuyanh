#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien{
    public:
    string ma, ten, gt, diachi, mst, Ngay;
    int ngay, thang, nam;

    friend istream &operator >> (istream &is, NhanVien &a){
        scanf("\n");
        getline(cin, a.ten);
        getline(cin, a.gt);
        scanf("%d/%d/%d\n", &a.thang, &a.ngay, &a.nam);
        getline(cin, a.diachi);
        getline(cin, a.mst);
        getline(cin, a.Ngay);
        //nhap ma
        string MA = to_string(stt);
        while(MA.length()<5){
            MA = '0' + MA;
        }
        a.ma = MA;
        stt++;
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien a){
        cout << a.ma << " " << a.ten << " " << a.gt << " ";
        printf("%.2d/%.2d/%.4d ", a.thang, a.ngay, a.nam);
        cout << a.diachi << " " << a.mst << " " << a.Ngay << endl;
        return os;
    }
};

bool cmp (NhanVien a, NhanVien b){
    if(a.nam < b.nam) return 1;
    else if (a.nam == b.nam){
        if(a.thang < b.thang) return 1;
        else if(a.thang == b.thang){
            if(a.ngay < b.ngay) return 1;
        }
    }
    return 0;
}

void sapxep (NhanVien ds[], int N){
    sort(ds, ds+N, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}