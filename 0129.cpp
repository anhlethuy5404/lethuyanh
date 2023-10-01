#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, p;
        cin >> n >> p;
        //n! chia het p^x --> giong tim uoc cua n
        int x = 0;
        for (int i = 1; i <= n; ++i){
        if (i % p == 0){
            int t = i;
            while (t % p == 0){
                x++;
                t /= p;
            }
        }
    }
    cout << x << endl;
    }
}