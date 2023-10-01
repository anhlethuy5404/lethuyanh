#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int f[100001] = {0};
        for (int i=0; i<s.length(); i++){
            f[s[i]]++;
        }
        for (int i=0; i<s.length(); i++){
            if (f[s[i]]>=1) {
                cout << s[i] << f[s[i]];
                f[s[i]]=0;
            }
        }
        cout << endl;
    }
}