#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int l,r;
        cin >> l >> r;
        // l=0, r=4
        //  1 3 4 3 1
        //l:1 2 3 4 5
        //  4 5 3 4 5
        //l:1 2 3 3 3
        while (l<=r && a[l]<=a[l+1]) l++;
        l++; //skip qua so lon nhat
        while (l<=r && a[l]<=a[l-1]) l++;
        (l>r) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}