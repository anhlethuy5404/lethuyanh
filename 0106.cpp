#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long m=n;
        long long rev=0;
        while (m!=0){
            int a=m%10;
            rev=rev*10+a;
            m/=10;
        }
        if (rev==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}