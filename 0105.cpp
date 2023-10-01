#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        int kq=1;
        while (n!=0){
            int a=n%10;
            if (a!=0 && a!=6 && a!=8) kq=0;
            n/=10;
        }
        if (kq==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}