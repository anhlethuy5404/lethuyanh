#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        multiset <char> se;
        int sum=0;
        for(int i=0; i<s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z') se.insert(s[i]);
            else sum += s[i] - '0';
        }
        for(auto x : se){
            cout << x;
        }
        cout << sum << endl;
    }
}