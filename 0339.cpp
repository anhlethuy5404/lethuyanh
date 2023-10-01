//dem so xau con co dau cuoi giong nhau
#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        int dem=0;
        for (int i=0; i<s.length(); i++){
            for (int j=s.length()-1; j>=i; j--){
                if (s[i]==s[j]) dem++;
            }
        }
        cout << dem << endl;
    }
}