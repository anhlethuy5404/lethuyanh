#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int b[n], j=0;
        for (int i=d; i<n; i++){
            b[j]=a[i];
            j++;
        }
        for (int i=0; i<d; i++){
            b[j]=a[i];
            ++j;
        }
        for (int j=0; j<n; j++){
            cout << b[j] << " ";
        }
        cout << endl;
    }
}