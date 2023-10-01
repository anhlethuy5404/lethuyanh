#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort (a, a+n);
        int r=1;
        for (int i=0; i<n; i++){
            if (a[i]>0){
                if (a[i]<=r) r=a[i]+1;
            }
        }
        cout << r << endl;
    }
}