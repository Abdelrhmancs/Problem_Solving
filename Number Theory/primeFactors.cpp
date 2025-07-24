//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
vector<pair<ll , ll >>primeFactors(ll n ) {
    vector<pair<ll , ll >>res;
    for (ll i = 2; i*i<=n; ++i) {
        if (n%i == 0) {
            ll c{};
            while (n%i == 0) {
                n/=i;c++;
            }
            res.push_back({i , c});
        }
    }
    if (n>1) {
        res.push_back({n,1});
    }
    return res;

}

int main() {
    Mbappe;
    vector<pair<ll,ll>>vp  = primeFactors(5);
    for (auto [f,s] : vp)cout<<f<<" " << s<<"\n";

    return 0;
}
