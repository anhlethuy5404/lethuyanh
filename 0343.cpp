#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string str;
        int x;
        getline (cin, str);
        stringstream ss(str);
        vector <int> chan, le;
        while (ss >> x){
            if (x%2==0) chan.push_back(x);
            else le.push_back(x);
        }
        if ((chan.size() + le.size()) % 2 == 0 && chan.size() > le.size())
            cout << "YES";
        else if ((chan.size() + le.size()) % 2 == 1 && chan.size() < le.size())
            cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}