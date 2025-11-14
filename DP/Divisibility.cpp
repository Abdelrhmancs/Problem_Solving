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
const int  N = 10000 + 5 ;
int dp[N][102] , a[N];
int n , k;
int solve(int i , int mod ) {
     if (i == n - 1) {
          return  (mod == 0);
     }
     if (dp[i][mod] != -1) {
          return dp[i][mod];
     }
     int op1 =  solve(i+1 , ((mod + a[i+1]) % k + k) % k );
     int op2 =  solve(i+1 , ((mod - a[i+1]) % k + k) % k );

     return dp[i][mod] = (op1 || op2) ;
}
int main() {
     Mbappe;


     int t ; cin>> t ;
     while (t--) {
          memset(dp , -1 , sizeof dp);
          cin >> n >> k;
          for (int i = 0; i < n; ++i) {
               cin >> a[i];
          }
          cout << (solve(0 , (a[0] % k + k) % k) ? "Divisible\n": "Not divisible\n");
     }

     return 0;
}

