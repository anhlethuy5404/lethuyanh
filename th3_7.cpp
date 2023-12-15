#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int i=n-2, j=n-1;
        while(a[i] <= a[i+1] && i>=0) i--;
        while(a[j] >= a[i]) j--;
        swap(a[i], a[j]);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}