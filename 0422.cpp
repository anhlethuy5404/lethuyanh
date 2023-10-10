#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <ll> v;
        for (int i=0; i<n; i++){
            ll x;
            cin >> x;
            if (x>0) v.push_back(x);
        }
        while (v.size()<n) v.push_back (0);
        for (int i=0; i< v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}