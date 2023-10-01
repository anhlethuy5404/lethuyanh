#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int uc = __gcd (a,b);
        cout << (long long) (a / uc) * b << " " << uc << endl;
    }
}