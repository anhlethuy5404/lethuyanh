#include<bits/stdc++.h>
using namespace std;

bool snt(int x){
    if(x<2) return 0;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        (snt(n)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}
