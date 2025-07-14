//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second'
using namespace std;
ll can(ll n) {
    return n*(n+1)/2;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        ll x; cin>>x;
        ll l =1 , r=  2* sqrt(x), mid, ans =1;
        while (l<=r) {
            mid = (l + r) /2;
            if (can(mid) >= x) {
                ans = mid ;
                r = mid -1;
            }else {
                l = mid +1;
                l = mid +1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
