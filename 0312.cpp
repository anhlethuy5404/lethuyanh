//xau pangram
//tim so ki tu chua xuat hien r lay 26 tru di neu nho hon k thi YES
#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        int k;
        cin >> s >> k;
        if (s.length() < 26){
            cout << "0" << endl;
            continue;
        }
        set <char> se;
        for (char x : s){
            se.insert(x);
        }
        if (26 - se.size() <= k) cout << "1\n";
        else cout << "0\n";
    }
}