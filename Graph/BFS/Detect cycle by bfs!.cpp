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
    int n , m ; cin>>n>>m;
    vector<int>adj[n+1];
    int vis[105]{};
    for (int i = 0; i < m; ++i) {
        int v,u; cin>>v>>u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int>q;
    q.push(1);
    int c{};
    while (!q.empty()) {
        int node = q.front();
        vis[node] = 1;
        q.pop();
        c++;
        for(auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    if (c == n && m == n)cout << "FHTAGN!"<<"\n";
    else cout << "NO"<<"\n";
}
