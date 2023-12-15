#include <bits/stdc++.h>
using namespace std;
//tim hoan vi truoc no (lam nguoc)
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        int i = n-2;
        while(i>=0 && (a[i] <= a[i+1])) i--;
        int j = n-1;
        while(a[j] >= a[i]) j--;
        swap (a[i], a[j]);
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}