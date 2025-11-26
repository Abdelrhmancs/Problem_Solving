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
vector<int>adj[N];
bool vis[N];
int degx;
void dfs(int node , int x) {
    vis[node] = true;
    if (x == node) degx = adj[node].size();
    for (auto it : adj[node]) {
        if (!vis[it]) {
         dfs(it , x);
        }
    }
}
int main() {
    Mbappe;
    int t; cin>>t;
    while (t--) {
        int n ,x ; cin>>n>>x;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            vis[i] = false;
        }
        for (int i = 0; i < n-1; ++i) {
            int v,u;cin>>v>>u;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        degx = 0;
        dfs(x , x);

        if (degx <= 1) {
            cout << "Ayush\n";
        } else {
            if (n % 2 == 0) {
                cout << "Ayush\n";
            } else {
                cout << "Ashish\n";
            }
        }

    }
    return 0;
}
