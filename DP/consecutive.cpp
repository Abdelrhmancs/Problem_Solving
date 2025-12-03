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

const int N = 55;
int n  , k;
int a[N];
int dp[N][N][2];
bool vis[N][N][2];
int solve(int l , int r , bool sign) {
    if (r - l + 1  > k ) {
        return -1e15;
    }
    if (r == n)return  0 ;
    int &ret = dp[l][r][sign];
    if (vis[l][r][sign])return ret;
    vis[l][r][2] = 1;


    int op1 = solve(l , r+1 , sign);
    int op2 = solve(r+1 , r+1 , sign^1);
    return ret =  max(op1 , op2) + (sign ? -a[r]:a[r]);

}
int main() {
    cin>>n >> k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<< solve(0 , 0  , 0);

    return 0;
}
