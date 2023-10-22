#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int M=-1e6;
        for (int i=0; i<s.length(); i++){
            if (s[i]>='0' && s[i]<='9'){
                int j=i+1;
                while(s[j]>='0' && s[j]<='9'){
                    j++;
                }
                string tmp=s.substr(i, j-i);
                int x=stoi(tmp);
                M=max(M, x);
                i=j;
            }
        }
        cout << M << endl;
    }
}