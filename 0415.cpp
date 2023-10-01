#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (auto &x : a){
            cin >> x;
        }
        for (auto &y : b){
            cin >> y;
        }
        int max=*max_element(a, a+n);
        int min=*min_element(b, b+m);
        cout << (long long) max * min  << endl;
    }
}