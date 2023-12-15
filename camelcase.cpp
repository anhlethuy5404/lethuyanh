#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int t = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') t++;
    }
    cout << t+1;
}