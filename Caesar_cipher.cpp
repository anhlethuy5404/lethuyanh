#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    int k;
    cin >> k;
    k%=26;
    for(int i=0; i<s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z'-k) || (s[i] >= 'A' && s[i] <= 'Z'-k)) s[i]+=k;
        else if((s[i] > 'z'-k && s[i] <='z') || (s[i] > 'Z'-k && s[i]<='Z')) s[i] = s[i]+k-26;
    }
    cout << s;
}