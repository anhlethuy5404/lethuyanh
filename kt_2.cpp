#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        int n=0;
        string s;
        getline(cin, s);
        vector <char> v;
        for (int i=0; i<s.length(); i++){
            if (i<100){
                v.push_back(s[i]);
            }
        }
        for (int i=0; i<v.size(); i++){
            if (v[v.size()-1] != '\0')
            cout << v[i];
        }
        cout << endl;
    }
}
