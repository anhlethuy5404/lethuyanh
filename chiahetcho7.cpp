//chia het cho 7
#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    getline (cin, s);
    int sum=(s[0]-'0')*3;
    for (int i=1; i<s.length(); i++){
        if (i%2==0) sum = sum*3 + (s[i]-'0');
        else sum+=s[i]-'0';
    }
    cout << sum << endl;
    (sum%7) ? cout << "0" << endl : cout << "1" << endl;
}