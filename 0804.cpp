#include <bits/stdc++.h>
using namespace std;

int main (){
    ifstream fp;
    fp.open ("VANBAN.in");
    set <string> s;
    string t;
    while(fp >> t){
        for(int i=0; i<t.length(); i++){
            t[i]=tolower(t[i]);
        }
        s.insert(t);
    }
    fp.close();
    for (auto x : s){
        cout << x << endl;
    }
}