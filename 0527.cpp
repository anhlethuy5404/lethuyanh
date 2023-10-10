#include <bits/stdc++.h>

using namespace std;

struct Time{
    int gio, phut, giay;
};

void nhap (Time &t){
    cin >> t.gio >> t.phut >> t.giay;
}

bool cmp (Time a, Time b){
    if (a.gio < b.gio) return 1;
    else if (a.gio == b.gio){
        if (a.phut < b.phut) return 1;
        else if (a.phut == b.phut) {
            if (a.giay < b.giay) return 1;
        }
    }
    return 0;
}

void xuat (Time t){
    cout << t.gio << " " << t.phut << " " << t.giay << endl;
}

int main (){
    int n;
    cin >> n;
    struct Time t[n];
    for (int i=0; i<n; i++){
        nhap (t[i]);
    }
    sort (t, t+n, cmp);
    for (int i=0; i<n; i++){
        xuat (t[i]);
    }
    return 0;
}