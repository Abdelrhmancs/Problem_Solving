//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 10 ,OO  = 0x3f3f3f3f;
int n , m ;
vector<int>adj[N];
int dis[N];
void bfs(int u ) {
    queue<int>q;
    q.push(u);
    memset(dis , OO , sizeof dis); // set a value OO for all place in array
    dis[u] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto it : adj[node]) {
            if (dis[it] == OO) {
                q.push(it);
                dis[it] = dis[node]+1;
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
    bfs(0);
    for (int i = 0; i < N; ++i) {
        cout<<i <<" dis "<<dis[i]<<"\n";
    }

    return 0;
}
