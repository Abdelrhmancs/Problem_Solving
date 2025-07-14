//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin>>n;
    ll d ; cin>>d;
    vector<pair<ll, ll >> vp(n);
    for (int i = 0; i < n; ++i) {
        cin>>vp[i].F >> vp[i].S ;
    }
    sort(vp.begin() , vp.end());
    ll r{} , l{} , sum{} ,ans{};
    while (r <n) {
        sum+=vp[r].S;
        while (vp[r].F - vp[l].F >= d) {
            sum-=vp[l].S;
            l++;
        }
        ans = max(ans , sum);
        r++;
    }
    cout<< ans <<endl;
    return 0;
}
