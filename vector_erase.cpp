#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> v;
    int a[t];
    for(auto &x : a) {
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    v.erase(v.begin()+k-1);
    int m, n;
    cin >> m >> n;
    v.erase(v.begin()+m-1, v.begin()+n-1);
    cout << v.size() << endl;
    for(auto x : v) cout << x << " ";
}