#include <bits/stdc++.h>
using namespace std;

void viet_thuong (string &s){
    for(int i=0; i<s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = tolower(s[i]);
    }
}

int main (){
    set <string> s1, s2;
    map <string, int> m;
    string tmp;
    ifstream fp1;
    fp1.open("DATA1.in");
    while(fp1 >> tmp){
        viet_thuong(tmp);
        s1.insert(tmp);
    }
    fp1.close();
    ifstream fp2;
    fp2.open("DATA2.in");
    while(fp2 >> tmp){
        viet_thuong(tmp);
        s2.insert(tmp);
    }
    fp2.close();
    for(auto x : s1) m[x]++;
    for(auto x : s2) m[x]++;
    for(auto x : m){
        cout << x.first << " ";
    }
    cout << endl;
    for(auto x : m){
        if(x.second >= 2){
            cout << x.first << " ";
        }
    }
}