#include <bits/stdc++.h>
using namespace std;

int thuan_nghich(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] != s[s.length()-i-1]) return 0;
    }
    return 1;
}

string chuyen_doi(string &s){
    for(int i=0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    if(s[i] >= 'A' && s[i] <= 'C') s[i] = '2';
    if(s[i] >= 'D' && s[i] <= 'F') s[i] = '3';
    if(s[i] >= 'G' && s[i] <= 'I') s[i] = '4';
    if(s[i] >= 'J' && s[i] <= 'L') s[i] = '5';
    if(s[i] >= 'M' && s[i] <= 'O') s[i] = '6';
    if(s[i] >= 'P' && s[i] <= 'S') s[i] = '7';
    if(s[i] >= 'T' && s[i] <= 'V') s[i] = '8';
    if(s[i] >= 'W' && s[i] <= 'Z') s[i] = '9';
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string so = chuyen_doi(s);
        (thuan_nghich(so)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}