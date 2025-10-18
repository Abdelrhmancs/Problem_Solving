//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
using namespace std;
const int N = 1e5+5;
int n ,m  ;
bool vis[N] ;
vector<int>adj[N];
vector<int>res;

void bfs(int start) {
    priority_queue<int , vector<int> , greater<int>>q;
    vis[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.top();
        res.push_back(node);
        vis[node] = true;
        q.pop();
        for (int it : adj[node]) {

            if (!vis[it]) {
                q.push(it);
                vis[it] = true;
            }
        }
    }
}
int main() {
    Mbappe;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int u , v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    for (int it : res) {
        cout<<it<<" ";
    }

    return 0;
}
