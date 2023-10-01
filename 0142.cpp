#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int snt (int x){
    if (x<2) return 0;
    for (int i=2; i<=sqrt(x); i++){
        if (x%i==0) return 0;
    }
    return 1;
}

int ntcn (int n){
    int t=0;
    for (int i=1; i<=n; i++){
        if (__gcd(i,n)==1) t++;
    }
    return t;
}

int main (){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        int t=ntcn(n);
        if (snt(t)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}