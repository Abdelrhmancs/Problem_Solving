// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
using namespace std;
vector<ll>lucky;
void allLucky(ll x) {
    if (x > 1e10)return;
    if (x>0)lucky.push_back(x);

    allLucky(x*10 + 4);
    allLucky(x*10 + 7);
}
int main() {
    Mbappe;
    allLucky(0);
    sort(all(lucky));
    ll l,r;cin>>l>>r;
    int idx{} ;
    ll res{};
    while (lucky[idx] < l )idx++;
    ll cur = l;
    while (cur <= r) {
        ll nex = lucky[idx];
        ll b = min(r , nex);
        res+= ((b - cur + 1) *nex);
        cur = b+1;
        idx++;
    }
    cout<<res<<"\n";

    return 0;
}
