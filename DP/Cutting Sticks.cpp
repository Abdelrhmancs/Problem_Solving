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
int n ;
int a[N];
int dp[N][N];
int solve(int l , int r) {
    if (l + 1 == r)return 0;
    int &ret = dp[l][r];
    if (~ret)return ret;
    int res = 1e15;
    for (int i = l+1; i < r; ++i) {
        res = min(res , solve(l , i) + solve(i , r) + (a[r] - a[l]));
    }
    return  ret = res;

}
int main() {
    Mbappe;
    int amount;
   while (cin>>amount && amount != 0) {
       cin >> n;
       a[0] = 0;
       for (int i = 1; i <=n; ++i) {
           cin>>a[i];
       }
       a[n+1] = amount;
       memset(dp , -1 , sizeof dp);
       cout << "The minimum cutting is " <<solve(0 , n+1)<<".\n";
   }

    return 0;
}
