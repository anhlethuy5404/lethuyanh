#include <iostream>
#include <math.h>

using namespace std;

int snt (long long x){
    if (x<2) return 0;
    for (long long i=2; i<=sqrt(x); i++){
        if (x%i==0) return 0;
    }
    return 1;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        int dem=0;
        for (long long i=1; i<=sqrt(n); i++){
            if (snt(i)&&i*i<=n) dem++;

        }
        cout << dem << endl;
    }
}