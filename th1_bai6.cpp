#include <bits/stdc++.h>

using namespace std;

string mmin (string s){
    for (int i=0; i<s.length(); i++){
        if (s[i]=='6')
            s[i]='5';
    }
    return s;
}

string mmax (string s){
    for (int i=0; i<s.length(); i++){
        if (s[i]=='5')
            s[i]='6';
    }
    return s;
}

int main (){
	int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << stoll(mmin(s1))+stoll(mmin(s2)) << " " << stoll(mmax(s1))+stoll(mmax(s2)) << endl;
    }
}