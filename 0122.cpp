#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long r=1;
        for (long long i=1; i<=n; i++){
            long long k = __gcd (r, i);
            r = r / k *i;
        }
        cout << r << endl;
    }
    
}