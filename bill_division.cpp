#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int sum = 0;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    int p;
    cin >> p;
    int c = (sum-a[k])/2;
    (p==c) ? cout << "Bon Appetit" : cout << p-c;
}