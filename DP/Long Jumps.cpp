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
const int N = 2e5+5;
int n;
ll dp[N];
vector<ll>a;
ll solve(int i) {
    if (i>n)return 0;
    ll&ret = dp[i];
    if (~ret)return  ret;
    ll res = solve(i+a[i])+a[i];
    return ret = res;
}
int main() {
    int t; cin>>t;
    while (t--) {
        cin>>n;
        a.resize(n+1);
        for (int i = 1; i <=n; ++i) {
            cin>>a[i];
        }
        memset(dp , -1  , sizeof dp);
        ll res = -1e12;
        for (int i = 1; i <=n; ++i) {
            res = max(res , solve(i));
        }
        cout <<res<<"\n";
    }
    return 0;
}
