//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 100;
int n , m ;
vector<int>adj[N];
vector<bool>vis(N);

int bfs(int start , int end ) {
    queue<pair<int , int >>q;
    q.push({start , 0});
    while (!q.empty()) {
        int node = q.front().F , cost = q.front().S;
        q.pop();
        vis[node] =1;
        if(node == end)return cost;
        for(auto it : adj[node]) {
            if (!vis[it]) {
                q.push({it,cost+1});
            }
        }
    }
}
int main() {
    Mbappe;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int v,u; cin>>v>>u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<bfs(3,5);

    return 0;
}
