#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n; 
        int a[n];
        int m=1e6, M=-1e6;
        bool d[100001] = {0};
        for (int i=0; i<n; i++){
            cin >> a[i];
            d[a[i]]=1;
            m=min(m, a[i]);
            M=max(M, a[i]);
        }
        int dem=0;
        for (int i=m; i<=M; i++){
            if (!d[i]) dem++;
        }
        cout << dem << endl;
    }
}