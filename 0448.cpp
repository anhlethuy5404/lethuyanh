#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        map <int, int> m;
        for (int i=0; i<n; i++){
            cin >> a[i];
            m[a[i]]++; 
        }
        if (m.find(k) == m.end()) cout << "-1" << endl;
        else cout << m[k] << endl;
    }
}