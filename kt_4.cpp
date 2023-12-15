#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tong (string s){
    ll sum=0;
    for(int i=0; i<s.length(); i++){
        sum+=s[i]-'0';
    }
    return sum;
}

bool thuan_nghich(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]!=s[s.length()-i-1]) return 0;
    }
    return 1;
}

bool so (string s){
    for(int i=0; i<s.length(); i++){
        if(s[0]!='8' || s[s.length()-1]!='8') return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        (thuan_nghich(s) && so(s) && (tong(s)%10==0)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}
