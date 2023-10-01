#include <bits/stdc++.h>

using namespace std;

int main (){
    string s, tmp;
    getline (cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    while (ss >> tmp){
        if (tmp!=x) cout << tmp << " ";
    }
    cout << endl;
}