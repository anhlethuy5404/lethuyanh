#include<bits/stdc++.h>
#define ll long long
using namespace std;

int canbang(int a[], int n){
    ll tong=0, tong2=0;
    for(int i=0; i<n; i++){
        tong+=a[i];
    }
    for(int i=0; i<n; i++){
        tong-=a[i];
        if(tong==tong2) return i+1;
        tong2+=a[i];
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cout << canbang(a, n) << endl;
    }
}