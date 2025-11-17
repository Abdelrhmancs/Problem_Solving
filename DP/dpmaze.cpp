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
/*
 base case  i == n and j == m return 1;
 if a[i+1][j] != # then solve(i+1,j)
 if a[i][j+1] != # then solve(i,j+1)
 */
const int N = 1000 + 5 , mod = 1e9 + 7;
int n ,m ;
char a[N][N];
ll dp[N][N];
ll solve(int i , int j) {
    if (i == n && j == m) {
        return 1;
    }
    ll &ret = dp[i][j];
    if (~ret) {
        return ret;
    }

    ll op1{} , op2{};
    if (i+1 <= n && a[i+1][j] != '#') {
        op1 = solve(i+1,j);
    }
    if (j+1 <= m && a[i][j+1] != '#') {
        op2 =  solve(i,j+1);
    }

    return ret = (op1 + op2)%mod;
}
int main() {
    Mbappe;
    cin>>n>>m;
    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <=m; ++j) {
            cin>>a[i][j];
        }
    }
    memset(dp , -1 , sizeof dp);
    cout << solve(1 , 1);
    return 0;
}
