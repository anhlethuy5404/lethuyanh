#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
void solve(string s){
    for (int i=0; i<s.length(); i++){
        if (s[i]=='-') continue; 
        if (s[i] < '0' || s[i] > '9') return;
    }
    //kiem tra so am, co thi bo dau '-'
    int check = 0;
    if(s[0]=='-'){
        s.erase(0,1);
        check=1;
    }
    if(s.length() > 10) return; //qua max cua int
    long long d = 0;
    for(int i=0; i<s.length(); i++){
        d = d*10+(s[i]-'0');
    }
    //neu check la so am thi chuyen ve so am
    if(check) d=-d;
    if(d >= INT_MIN && d <=INT_MAX) ans += d;
}

int main(){
	ifstream fp;
    fp.open("DATA.in");
    string s;
    while(fp >> s){
        solve(s);
    }
    cout << ans;
}