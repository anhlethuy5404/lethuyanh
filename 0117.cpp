#include <iostream>
#define ll long long
using namespace std;

int tachso (ll x){
    int sum=0;
    while (x!=0){
        int a=x%10;
        sum+=a;
        x/=10;
    }
    if (sum>=10) return tachso (sum);
    return sum;
}

int main (){
    int n;
    cin >> n;
    while (n--){
        long long a;
        cin >> a;
        cout << tachso (a) << endl;
    }
}