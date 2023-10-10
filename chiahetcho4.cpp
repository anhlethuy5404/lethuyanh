//chia het cho 4
#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    getline (cin, s);
    int x;
    for (int i=0; i<s.length(); i++){
        x = (s[s.length()-2] - '0') * 10 + (s[s.length()-1] - '0');
    }
    (x%4) ? cout << "no" : cout << "yes";
}