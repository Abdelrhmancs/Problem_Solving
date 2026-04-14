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

const int N = 2e5 + 5;

vector<int> adj[N];
bool vis[N];

bool isCycle;

void dfs(int u) {
    vis[u] = true;

    if (adj[u].size() != 2)
        isCycle = false;

    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int main() {
    Abdelrhman;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cycles = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            isCycle = true;
            dfs(i);

            if (isCycle)
                cycles++;
        }
    }

    cout << cycles << "\n";
}
