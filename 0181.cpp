#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        long long a,x,y;
        cin >> a >> x >> y;
        //ucln cua 2 so p,q la so lan lap lai so a theo uoc cua x,y 
        //vd: 2222 va 222, x y co uoc 1 ==> 2 la uoc
        //2222 va 22 , x y co uoc chung la 2 ==> 22 la uoc chung p,q
        long long d=__gcd(x,y);
        for (int i=1; i<=d; i++){
            cout << a;
        }
        cout << endl;
    }
}