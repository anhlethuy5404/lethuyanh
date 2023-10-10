#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (s[0]=='0') cout << "INVALID";
        else{
            int kq=1;
            set <char> v;
            for (int i=0; i<s.length(); i++){
            if (s[i] < '0' || s[i] > '9') {
                kq=0;
                cout << "INVALID";
                break;
            }
            else if(kq==1){
                for (auto it : s){
                    v.insert(it);
                }
            }
            }
            if(kq){
                if (v.size()==10) cout << "YES";
                else cout << "NO";
            } 
        }
        cout << endl;  
    }
}