#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n-1];
        int m=1e6, M=-1e6;
        bool d[100001] = {0};
        for (int i=0; i<n-1; i++){
            cin >> a[i];
            d[a[i]] = 1;
            m=min(m, a[i]);
            M=max(M, a[i]);
        }
        for (int i=m; i<=M; i++){
            if (!d[i]){
                cout << i << endl;
                break;
            }
        }
    }
}