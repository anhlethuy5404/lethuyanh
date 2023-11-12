#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tmp;
void so_may_man (string s){
    ll sum=0;
    for(int i=0; i<s.length(); i++){
        sum += s[i] - '0';
    }
    string tong = to_string(sum);
    if(tong.length()>1) so_may_man(tong);
    else tmp = stoi(tong);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        so_may_man(s);
        //cout << tmp;
        if(tmp==9) cout << "1";
        else cout << "0";
        cout << endl;
    }
}