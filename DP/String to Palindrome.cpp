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
const int N = 1e3 + 3;
// bool dp[N][N] , vis[N][N];
string s;
// bool isPland(int l , int r) {
//     if (l >= r) {
//         return 1;
//     }
//     bool &ret = dp[l][r];
//     if (vis[l][r]) return ret;
//     vis[l][r] = 1;
//     return s[l] == s[r] && isPland(l+1 , r-1) ;
// }
int dp2[N][N];
bool vis2[N][N];
int solve(int l , int r ) {
    if (l >= r) {
        return 0;
    }
    int &ret = dp2[l][r];
    if (vis2[l][r]) {
        return  ret;
    }
    vis2[l][r] = 1;
    if (s[l] == s[r])
        return ret = solve(l+1, r-1);

    int dll = 1 + solve(l+1, r);
    int dlr = 1 + solve(l, r-1);
    int rep = 1 + solve(l+1, r-1);

    return  ret = min({dll , dlr , rep });
}
int main() {
    int t;cin >> t;
    for (int i=1;i<=t;i++){
        cin >> s;
        memset(vis2,0,sizeof(vis2));
        cout << "Case " << i << ": " << solve(0, s.size()-1) << "\n";
    }
    return 0;
}
