#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long sum=0;
        for (long long i=1; i<=sqrt(n); i++){
            if (n%i==0) {
                if (i!=n/i) sum+=i+n/i; 
                else sum+=i;
            }
        }
        cout << sum << endl;
    }
}