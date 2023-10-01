#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        while (q--){
            int l, r;
            cin >> l >> r;
            int sum=0;
            for (int i=0; i<n; i++){
                if (l-1<=i && i<=r-1) sum+=a[i];
            }
            cout << sum << endl;
        }
    }
}