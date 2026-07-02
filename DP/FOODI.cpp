// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Abdelrhman ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
using namespace std;
const int N = 1005;
int a[N] , n , k , dp[100][N];

int solve(int i , int repo) {
    if (repo > k) return -1e9;
    if (i == n) return 0;

    int&ret = dp[i][repo];

    if(~ret)return ret;

    int op1 = solve(i+1 , repo+a[i])+a[i];
    int op2 = solve(i+1 , repo);

    return ret = max(op1 , op2);
}
int main()
{
    Abdelrhman;
    int t; cin>>t;
    while (t--) {
       cin>>n>>k;
        memset(dp , -1 , sizeof dp);
        for (int i = 0; i < n; ++i) {
            int r;cin>>r;
            int sum{};
            while (r--) {
                int x; cin>>x;
                sum+=x;
            }
            a[i]=sum;
        }
        cout << solve(0,0)<<"\n";
    }


}
