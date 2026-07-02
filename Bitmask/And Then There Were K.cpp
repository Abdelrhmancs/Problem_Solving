#include <bits/stdc++.h>
#define ll long long
#define ON(n,k) ((n) | (1 << k))
//make a bit is on by shifting bits of n , k times at the lift and OR with n
#define OFF(n,k) ((n) | ~(1<<k))
// make a bit is off by shifting bits of n , k times at the lift, then invert by ~ sign ,then OR with n
#define IsON(n,k) (((n)>>(k)) & 1)
// check any bits in k is on or no
using namespace std;
int main() {
   int t ; cin>>t;
   while(t--) {
    ll n; cin>>n;
     int d = log2(n);
     cout<<(1<<d) - 1<<endl;
   }

    return 0;
}


