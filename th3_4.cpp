#include<bits/stdc++.h>
using namespace std;
int n = 20;
void result(int a[]){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << " ";
}
void binary(int i, int a[]){
    for (int j=0; j<=1; j++){
        a[i]=j;
        if(i==n){
            result(a);
        }
        else binary(i+1, a);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        binary(1, a);
        cout << endl;
    }
}