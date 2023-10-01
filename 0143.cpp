#include <iostream>
#include <cmath>

using namespace std;

long long f[100];

long long fibo (long long n){
    f[0]=0;
    f[1]=1;
    for (long long i=2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main (){

    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        cout << fibo (n) << endl;
    }
}