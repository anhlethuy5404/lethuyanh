#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    long long s=0, a=1;
    for (int i=1; i<=n; i++){
        a*=i;
        s+=a;
    }
    cout << s << endl;
}