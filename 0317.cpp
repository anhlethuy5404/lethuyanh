#include <bits/stdc++.h>

using namespace std;

bool thuannghich (string s){
    for (int i=0; i<s.length()/2; i++){
        if (s[i]!=s[s.length()-i-1]) return false;
    }
    return true;
}

bool chan (string s){
    for (int i=0; i<s.length(); i++){
        if ((s[i]-'0')%2!=0) return false;
    }
    return true;
}

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        (thuannghich(s) && chan(s)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}