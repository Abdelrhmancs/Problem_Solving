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
// const int N = 1e5 + 5;
// ll dp[N][3], a[N][3];
// int n  , k;
// ll solve(int i , int cut) {
//     if (i == n) return 0 ;
//     ll &ret = dp[i][cut];
//     if (~ret) return ret;
//
//     ll op1 = solve(i+1 ,cut);
//     ll op2 = solve(i+1 , 1) + 1;
//     ll op3 = solve(i-1 , 2) + 1;
//     return ret = max({op1 , op2 , op3});
//}
int main() {
   int n ;cin>>n ;
    vector<pair<ll , ll >>a(n);
   for (int i = 0; i < n; ++i) {
       cin>>a[i].F >> a[i].S;
   }
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 2) {
        cout << 2;
        return 0;
    }
    int res{} , start = a[0].F;
   for (int i = 1; i < n-1; ++i) {

       if (a[i].F  - a[i].S > start) {
            res++;start = a[i].F;
       }else if (a[i].F + a[i].S < a[i+1].F) {
           res++;start = a[i].F + a[i].S;
       }else {
           start = a[i].F;
       }
   }
    cout << res+2<<"\n";
    return 0;
}
