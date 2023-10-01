#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        long long n, r;
        cin >> n;
        for (long long i=2; i<=sqrt(n); i++){
            if (n%i==0){
                while (n%i==0){
                    r=i;
                    n/=i;
                }
            }
        } 
        if (n>1) r=n;
        cout << r << endl;
    }
}