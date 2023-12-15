#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, p;
        int a[n];
        cin >> n >> p;
        set <int> se;
        for(int i=0; i<n; i++){
            cin >> a[i];
            se.insert(a[i]);
        } 
        int check = -1;
        for(int i=0; i<n; i++){
            int tmp = p + a[i];
            if(se.count(tmp) != 0) {
                check = 1;
                break;
            }
        }
        cout << check << endl;
    }
}