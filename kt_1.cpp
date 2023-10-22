#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n; string s; 
        cin >> n >> s;
        string str = s.substr(6);
        int x = stoi (str) + n;
        str = to_string(x);
        if (s.substr(0,5) == "29/02" ){
            if (x%4==0 && x%100!=0 || x%400==0)
            cout << "29/02/" + str << endl;
            else cout << "28/02/" + str << endl;
        }
        
        else cout << s.substr(0,6) + str << endl;
    }
}