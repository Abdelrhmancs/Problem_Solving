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

int main()
{
    Abdelrhman;
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> adj[n+1];
        vector<int> levels(n + 1, -1);
        for(int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int> q;
        q.push(1);
        levels[1] = 0;

        vector<int> even, odd;
        while(!q.empty()) {
            int node = q.front(); q.pop();
            if(levels[node] % 2 == 0) even.push_back(node);
            else odd.push_back(node);

            for(int v : adj[node]) {
                if(levels[v] == -1) {
                    levels[v] = levels[node] + 1;
                    q.push(v);
                }
            }
        }

        vector<int> ans;
        if(even.size() <= n / 2) ans = even;
        else ans = odd;

        cout << ans.size() << "\n";
        for(int v : ans) cout << v << " ";
        cout << "\n";
    }
}
