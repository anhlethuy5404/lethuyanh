#include <bits/stdc++.h>

using namespace std;

int tangchat (string s){
    for (int i=1; i<5; i++){
        if (s[i] <= s[i-1]) return 0;
    }
    return 1;
}

int bangnhau (string s){
    for (int i=1; i<5; i++){
        if (s[i] != s[i-1]) return 0;
    }
    return 1;
}

int bahai (string s){
    for (int i=0; i<5; i++){
        if (s[0]==s[1] && s[1]==s[2] && s[3]==s[4])
            return 1;
    }
    return 0;
}

int locphat (string s){
    for (int i=0; i<5; i++){
        if (s[i]!='6' && s[i]!='8') return 0;
    }
    return 1;
}

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        s.erase (0,5); //xoa 5 ki tu dau
        s.erase (3,1); //xoa dau .
        (tangchat(s) || bangnhau(s) || bahai(s) || locphat(s)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}