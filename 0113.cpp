#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    while (n--){
        long long a;
        cin >> a;
        if (a%100==86) cout << "1" << endl;
        else cout << "0" << endl;
    }
}