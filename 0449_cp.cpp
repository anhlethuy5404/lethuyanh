#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin >> t; 
    while(t--){ 
        int n , m; 
        cin >> n >> m; 
        int a[n]; 
        set<int> mp; 
        for(int i = 0 ; i < n ; i++){ 
            cin >> a[i]; mp.insert(a[i]); 
        } 
        int oo = -1; 
        for(int i = 0 ; i < n ; i++){ 
            int ok = m + a[i]; if(mp.find(ok) != mp.end()){ oo = 1; break; } } 
            cout << oo << endl; 
            } 
            }