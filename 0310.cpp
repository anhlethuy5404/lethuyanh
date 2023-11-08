#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum_min(string s1, string s2){
    for (int i=0; i<s1.length(); i++){
        if (s1[i]=='6') s1[i]='5';
    }
    for (int i=0; i<s2.length(); i++){
        if (s2[i]=='6') s2[i]='5';
    }
    ll x = stoll(s1); ll y = stoll(s2);
    return x + y;
}

ll sum_max (string s1, string s2){
    for (int i=0; i<s1.length(); i++){
        if (s1[i]=='5') s1[i]='6';
    }
    for (int i=0; i<s2.length(); i++){
        if (s2[i]=='5') s2[i]='6';
    }
    ll x = stoll(s1); ll y = stoll(s2);
    return x + y;
}

int main(){
    int t;
    cin >> t;
    //cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << sum_min(s1, s2) << " " << sum_max(s1, s2) << endl;
    }
}