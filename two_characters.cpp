#include <bits/stdc++.h>
using namespace std;
//tim xau con xen ke dai nhat
int valid (string s, char first, char second){
    string ans="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==first || s[i]==second){
            //ktra xen ke khong
            if(ans.size()>0 && ans[ans.size()-1]==s[i]) return 0;
            else ans+=s[i];
        }
    }
    if(ans.size()<2) return 0; //loại th chỉ có 1 kí tự
    return ans.size();
}

int check (string s){
    int ans=0;
    for(char i='a'; i<'z'; i++){
        for(char j=i+1; j<='z'; j++){
            int res = valid(s, i, j);
            if(res > ans) ans = res;
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    string s;
    cin >> s;
    cout << check(s);
}