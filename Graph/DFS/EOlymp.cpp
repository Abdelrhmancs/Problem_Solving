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
const int N = 1e5;
int n , m ;
vector<int>adj[N];
bool vist[N];

void dfs(int node) {
    vist[node] = true;
    for (int v : adj[node]) {
        if (!vist[v]) {
            dfs(v);
        }
    }
}
int main() {
    Mbappe;
    cin>> n >> m;
    for (int i = 0; i < m; ++i) {
        int u , v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    bool f = false;
    for (int i = 1; i <= n; ++i) {
        if (!vist[i]) {
            f  = true;
        }
    }
    if (f) {
     cout<<"NO"<<"\n";
    }else {
        cout<<"YES"<<"\n";
    }
    return 0;
}
