#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    map <string, int> m;
    cin.ignore();
    while(t--){
        string s, tmp, res = "";
        getline(cin, s);
        vector <string> v;
        stringstream ss(s);
        while(ss >> tmp){
            transform (tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            v.push_back(tmp);
        }
        res += v[v.size()-1];
        for(int i=0; i<v.size()-1; ++i){
            res += v[i][0];
        } 
        if(m.count(res)==0) {
            m[res]=1;
            cout << res << "@ptit.edu.vn" << endl;
        }
        else { 
            m[res]++;
            cout << res << m[res] << "@ptit.edu.vn" << endl;
        }
    }
}
/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
 */