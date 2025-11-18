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
const int N = 1e5 + 5;
ll  freq[N] , mx{}, dp[N];
ll solve(int i) {
    if (i > mx) {
        return 0;
    }
    ll &ret  = dp[i];
    if (~ret) {
        return ret;
    }
    ll op1 = solve(i+1);
    ll op2 = (freq[i] * i )+ solve(i+2);

    return ret =  max(op1 , op2);
}

int main() {
    Mbappe;
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        ll l ;cin>> l;
        freq[l]++;
        mx = max(mx , l);
    }
    memset(dp , -1 , sizeof dp);
    cout << solve(1);

    return 0;
}
