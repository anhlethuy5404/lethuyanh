#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int kq=1;
        for (int i=1; i<s.length(); i++){
            if (abs(s[i]-s[i-1])!=1) 
                kq=0;  
        }
        if (kq) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}