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
const int N = 1e5 + 5;
vector<int> adj[N];
int dp[N];
int dfsDp(int node) {
     if (adj[node].size() == 0 ) {
          return 0;
     }
     if (dp[node] != -1 ) {
          return  dp[node];
     }
      dp[node] = INT_MIN;
     for (int it : adj[node]) {
          dp[node] = max(dp[node] , dfsDp(it)+1);
     }
     return dp[node];
}
int main() {
     Mbappe;
     int n , m  ; cin>>n >> m ;
     for (int i = 0; i < m; ++i) {
          int v , u; cin>>v>>u;
          adj[v].push_back(u);
     }
     memset(dp , -1 , sizeof dp);
     int res{};
     for (int i = 1; i <=n; ++i) {
          res = max(res , dfsDp(i));
     }
     cout << res << "\n";
     return 0;
}
