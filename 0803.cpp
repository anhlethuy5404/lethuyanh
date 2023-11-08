#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream fp;
    fp.open("DATA.in");
    map <int, int> m;
    int x;
    while(fp >> x){
        m[x]++;
    }
    fp.close();
    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
}