#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long long fb[100];

void fibo (){
    fb[0]=0;
    fb[1]=1;
    for (int i=2; i<=92; i++){
        fb[i] = fb[i-1] + fb[i-2];
    }
}

int main (){
    fibo ();
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        int kq=0;
        for (long long i=0; i<=92; i++){
            if (fb[i] == n) {
                kq=1;
                break;
            }
        }
        if (kq) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}