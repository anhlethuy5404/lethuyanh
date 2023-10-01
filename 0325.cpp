#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        int sum=0;
        for (int i=0; i<s.length(); i++){
            if (i%2==0) sum+=s[i]-'0';
            else sum-=s[i]-'0';
        }
        (sum%11) ? cout << "0" << endl : cout << "1" << endl;
    }
}