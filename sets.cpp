#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    set <int> s;
    while(t--){
        int y, x;
        cin >> y >> x;
        if(y==1) s.insert(x);
        else if(y==2) s.erase(x);
        else if(y==3){
            (s.count(x)!=0) ? cout << "Yes\n" : cout << "No\n";
        }
    }
}