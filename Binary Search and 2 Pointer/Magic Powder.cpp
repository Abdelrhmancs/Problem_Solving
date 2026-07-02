//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second

using namespace std;
bool can(ll x ,vector<ll>a , vector<ll>b , ll k) {
    ll need = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        ll required = a[i] * x;
        if (required > b[i]) {
            need += (required - b[i]);
        }
        if (need > k) return false;
    }
    return need <= k;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n ; cin>>n ;
    ll k ; cin>>k ;
    vector<ll>a(n) , b(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    ll l{} , r = 2e9 , ans = 0, mid =0;
    while (l<=r) {
        mid = (l+r)/2;
        if (can(mid , a,b,k)) {
            ans = mid;
            l=mid+1;
        }else {
            r= mid -1;
        }
    }
    cout<< ans<<endl;
    return 0;
}

