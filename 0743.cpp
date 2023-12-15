#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, tmp, str="";
        getline(cin, s);
        vector <string> v;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        for(int i=v.size()-1; i>=0; i--){
            str += v[i] + ' ';
        }
        str.pop_back();
        cout << str << endl;
    }
}
/*
2
I like this program very much
much very program this like I
*/