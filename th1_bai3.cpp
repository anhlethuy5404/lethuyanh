#include <bits/stdc++.h>

using namespace std;

long long tong (long long n){
    long long sum=0;
    while (n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void test (){
    long long n;
    cin >> n;
    long long s1=tong(n);
    long long s2=0;
    for (long long i=2; i<=sqrt(n); ++i){
        while (n%i==0){
            s2+=tong(i);
            n/=i;
        }
        if (n==1) break;
    }
    if (n>1) s2+=tong(n);
    (s1==s2) ? cout << "YES\n" : cout << "NO\n";
}

int main (){
    test(); 
}