#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        map <ll, bool> m;
        for (int i=0; i<n; i++){
            ll x;
            cin >> x;
            m[x]=true;
        }
        for (int i=0; i<n; i++){
            if (m[i]) cout << i << " ";
            else cout << "-1 ";
        }
        cout << endl;
    }
}