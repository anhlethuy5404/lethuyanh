#include <bits/stdc++.h>

using namespace std;

string so (string s){
    string str="";
    for (int i=0; i<s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9')
            str+=s[i];
    }
    for (int i=0; i<str.length(); i++){
        if (str[0]=='8'){
            str.erase(0,2);
            return '0'+str;
        }
    }
    return str;
}


int main (){
	int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        cout << so(s) << endl;
    }
}