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
    int q;
    cin >> q;
    while(q--){
        int y;
        cin >> y;
        vector <int> :: iterator index;
        index = lower_bound(v.begin(), v.end(), y);
        (*index == y) ? cout << "Yes " << index-v.begin()+1 : cout << "No " << index-v.begin()+1;
        cout << endl;       
    }
}