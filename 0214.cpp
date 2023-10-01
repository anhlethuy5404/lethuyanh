#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n-k+1; i++){
            int r=-1e6;
            for (int j=i; j<i+k; j++){
                
                if (a[j]>r) r=a[j];
                
            }
            cout << r << " ";
        }
        cout << endl;
    }
}