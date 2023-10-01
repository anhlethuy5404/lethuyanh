#include <iostream>
#include <math.h>

using namespace std;

int check (long long x){
    int dem=0;
    for (long long i=1; i<=sqrt(x); i++){
        if (x%i==0) {
            if (i%2==0) dem++;
            if ((x/i)%2==0 && i*i!=x) dem++;
        }
    }
    return dem;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        cout << check (n) << endl;
    }
}