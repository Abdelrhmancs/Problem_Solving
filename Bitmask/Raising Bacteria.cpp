#include <bits/stdc++.h>
#define ll long long
#define ON(n,k) ((n) | (1 << k))
#define IsON(n,k) (((n)>>(k)) & 1)
#define OFF(n,k) ((n) | ~(1<<k))
using namespace std;

int main() {
    ll n ;cin>>n;
    int c=0;
    while (n>0) {
         if(IsON(n,0))c++;
        n>>=1;
    }
    cout<<c<<endl;
    return 0;
}
