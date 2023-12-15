#include <bits/stdc++.h>
using namespace std;

void result(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i];
    }
    cout << " ";
}

void binary (int i, int a[], int n){
    for(int j=0; j<=1; j++){
        a[i]=j;
        if(i==n-1){
            result(a, n);
        }
        else binary (i+1, a, n);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        binary(0, a, n);
        cout << endl;
    }
}