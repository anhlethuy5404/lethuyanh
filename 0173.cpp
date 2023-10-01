#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

long long lcm (long long x, long long y){
    return (long long) x/__gcd(x,y)*y;
}

int main (){
    int test;
    cin >> test;
    while (test--){
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        long long a=pow(10,n-1), b=pow(10,n)-1;
        long long res=lcm(lcm(x,y), z);
		long long d=a/res;
        if (res > b) cout << "-1" << endl;
        else if (a%res==0) cout << a << endl;
        else cout << (long long) res*(d+1) << endl;
/*
        if (a%res==0) {
            cout << a << endl;
        }
        else if (res<=b){
            cout << res * (d+1) << endl;
        }
        else cout << "-1" << endl;
*/
    }
}