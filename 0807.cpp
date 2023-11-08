#include <bits/stdc++.h>
using namespace std;

int main (){
    ifstream fp;
    int n,m, tmp;
    set <int> s1, s2;
    map <int, int> mp;
    fp.open("DATA.in");
    fp >> n >> m;
    for(int i=0; i<n; i++){
        fp >> tmp;
        s1.insert(tmp);
    }
    for(int i=0; i<m; i++){
        fp >> tmp;
        s2.insert(tmp);
    }
    fp.close();
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;
    for (auto x : mp){
        if (x.second == 2)
            cout << x.first << " ";
    }
}