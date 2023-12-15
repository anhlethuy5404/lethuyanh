#include<bits/stdc++.h>
using namespace std;

bool check(const vector<vector<string>>& s){
    unordered_set <string> se; 
    for(const auto& x : s){
        int day = stoi(x[0]);
        string time = x[1];
        string week = x[2];
        for(char w : week){
            for(char t : time){
                string k = to_string(day) + w + t;
                if(se.count(k) > 0) return 1;
                se.insert(k);
            }
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<string>> s;
        for(int i=0; i<n; ++i){
            vector<string> s1(3);
            cin >> s1[0] >> s1[1] >> s1[2];
            s.push_back(s1);
        }
        if(check(s)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
/*
2
3
2
12
123456789-12345
2
--34
123456789-12345
3
1234
----5--8--1
3
2
12
123456789-12345
2
--34
123456789-12345
2
1234
----5--8--1
*/