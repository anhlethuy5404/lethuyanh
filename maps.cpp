#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    map <string, int> m;
    string ten; int diem;
    while(t--){
        int k;
        cin >> k;
        switch(k){
            case 1:{
                cin >> ten >> diem;
                auto it=m.find(ten);
                if(it!=m.end()) m[ten]+=diem;
                else m.insert(make_pair(ten, diem));
                break;
            }
            case 2:
                cin >> ten;
                m.erase(ten);
                break;
            case 3: {
                cin >> ten;
                auto it=m.find(ten);
                (it!=m.end()) ? cout << m[ten] << endl : cout << 0 << endl;
                break;
            }
        }
    }
}