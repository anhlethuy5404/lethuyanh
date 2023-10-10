#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bool d[10] = {0};
        for (int k=0; k<n; k++) {
            string s;
            cin >> s;
            for (int i=0; i<s.length(); i++){
                d[s[i]-'0'] = 1;
            }
        }
        for (int i=0; i<10; i++){
            if (d[i]==1) 
                cout << i << " ";
        }
        cout << endl; 
    }
    return 0;
}