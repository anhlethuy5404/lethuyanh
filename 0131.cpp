#include <iostream>
#include <math.h>

using namespace std;

int usnt (int x){
    if (x==1) return 1;
    for (int i=2; i<=sqrt(x); i++){
        if (x%i==0)  return i;  
    }
    return x;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i=1; i<=n; i++){
            cout << usnt(i) << " ";
        }
        cout << endl;
    }
}