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

const int N = 500 + 5;
int  a[N],b[N];
ll dp[N][N];
int n , l , k;
ll solve(int idx  , int rm ) {
    if (idx == n) {
        return 0;
    }
    ll &ret = dp[idx][rm];
    if (~ret)return ret;
    ll res = 1e15;
    for (int i = 0; i <=min(rm , n - idx - 1); ++i) {
        res = min(res , solve(idx+i+1, rm - i) + ((a[idx + i +1] -a[idx])*b[idx]));
    }
    return  ret = res ;
}

int main() {
    Mbappe;
    cin >> n >> l >> k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    a[n] = l;
    memset(dp, -1 , sizeof dp);
    cout<< solve(0 , k);
    return 0;
}
