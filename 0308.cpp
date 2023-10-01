#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char f[100001] = {};
        for (int i=0; i<s.length(); i++){
            f[s[i]]++;
        }
        for (int i=0; i<s.length(); i++){
            if (f[s[i]]==1) cout << s[i];
        }
        cout << endl;
    }
}