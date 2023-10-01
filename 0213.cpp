#include <bits/stdc++.h>

using namespace std;

int f[100];

void fibo (){
    f[0]=0;
    f[1]=1;
    for (int i=2; i<=92; i++){
        f[i]=f[i-1]+f[i-2];
    }
}

int check (int n){
    for (int i=0; i<=92; i++){
        if (n==f[i]) return 1;
    }
    return 0;
}

int main (){
    fibo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            if (check(a[i])) cout << a[i] << " ";
        }
        cout << endl;
    }
}