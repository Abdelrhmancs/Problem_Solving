//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
bool can(ll v  , ll n  , int  k) {
    ll sum{} , current = v;
    while (current > 0 ) {
        sum+=current;
        current/=k;
        if (sum >= n) return  true;
    }
    return  sum >= n ;

}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll n  ,k ; cin>>n >> k ;
    ll l{} , r = n  , ans = n;

    while (l<=r) {
        ll mid  = (l+r) / 2;

        if (can(mid , n , k )) {
            ans = mid;
            r = mid -1;
        }else {
            l = mid +1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
