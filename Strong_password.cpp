#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    char s[t+1];
    cin.getline(s, t+1);
    int num=0, lc=0, uc=0, special=0;
    for(int i=0; i<t; i++){
        if(s[i]>='0' && s[i]<='9') num++;
        if(s[i]>='a' && s[i]<='z') lc++;
        if(s[i]>='A' && s[i]<='Z') uc++;
        if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='-' || s[i]=='+') special++;
    }
    int dem=0;
    if(num==0) dem++;
    if(lc==0) dem++;
    if(uc==0) dem++;
    if(special==0) dem++;
    //cout << dem << endl;
    if(t>=6) cout << dem;
    else if(dem >= 6-t) cout << dem;
    else cout << 6-t;
}