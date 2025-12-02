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

const int N = 405;
int n;
ll a[N] , dp[N][N] , pref[N];
ll solve(int  l , int r) {
    if (l>=r) {
        return 0;
    }
    ll &ret = dp[l][r];
    if (~ret)return ret;
    ll res = 1e15;
    for (int i = l; i < r; ++i) {
        res = min(res , solve(l , i) + solve(i+1 , r));
    }
    return  ret = res + (pref[r] - pref[l - 1]);
}

int main() {
    Mbappe;
    cin >> n ;
    memset(dp , -1 , sizeof dp);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        pref[i] = a[i];
        if (i) {
            pref[i]+=pref[i-1];
        }
    }
    cout << solve(0 , n-1);
    return 0;
}
