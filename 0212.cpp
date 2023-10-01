#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for (int i=n-1; i>=0; i--){
            cin >> a[i]; //nhap a(n-1) den a(0)
        }
        long long sum=0, mu=1;
        for (int i=0; i<n; i++){
            sum = (sum + mu*a[i]) % mod;
            mu = mu * x % mod;
            //tinh bd tu a(0) den a(n-1)
        }
        cout << sum << endl;
    }
}