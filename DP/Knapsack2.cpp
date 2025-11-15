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
const int N = 100 +  5 , mx = 1e5 + 5;
int n ;
ll a[N][3]  , w  , dp[N][mx] ;
ll solve(int i , int last) {
     if (last < 0) {
          return  1e12;
     }
     if (i == n ) {
          return  (last  == 0 ? 0 :1e12);
     }
     ll &ret = dp[i][last];
     if (~ret) {
          return ret;
     }

     ll op1 = solve(i+1 , last  - a[i][1]) + a[i][0];
     ll op2 = solve(i+1 , last);
     return ret = min(op1 , op2);
}
int main() {
     Mbappe;
     cin >> n >> w;
     for (int i = 0; i < n; ++i) {
          cin >> a[i][0] >> a[i][1];
     }
     memset(dp , -1 , sizeof dp);
     for (int i = 1e5; i >=0; i--) {
          if (solve(0 , i) <= w) {
               cout << i << "\n";
               break;
          }
     }
     return 0;
}
