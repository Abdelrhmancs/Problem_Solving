#include <bits/stdc++.h>
#define ll long long
#define ON(n,k) ((n) | (1 << k))
#define IsON(n,k) (((n)>>(k)) & 1)
#define OFF(n,k) ((n) | ~(1<<k))
using namespace std;

int main() {
  int t; cin>>t;
  while (t--) {
    ll a,b; cin>>a>>b;
    cout<<(a ^ b)<<endl;
  }
    return 0;
}
