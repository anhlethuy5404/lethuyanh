#include <bits/stdc++.h>
using namespace std;

int snt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int sum(int n){
    int s = 0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int smith(int n){
    int tong1 = sum(n);
    int tong2 = 0;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            tong2+=sum(i);
            n/=i;
        }
        if(n==1) break;
    }
    if(n>1) tong2+=sum(n);
    return tong1==tong2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (snt(n)) {
            cout << "NO" << endl;
        }
        else{
            (smith(n)) ? cout << "YES" : cout << "NO";
            cout << endl;
        }
    }
}