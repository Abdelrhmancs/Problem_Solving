//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1000 +5 ;
int n;
vector<int>adj(N);
vector<int>vis(N);
int mark =1;
int res;
void DFS(int u) {
    if (vis[u] == mark) {
        res = u;
        return;
    }
    vis[u] = mark;
    DFS(adj[u]);
}
int main() {
    Mbappe;
    cin>>n;
    for (int i = 1; i <=n; ++i) {
         cin>>adj[i];
    }
    for (int i = 1; i <= n; ++i) {
        res -1;
        DFS(i);
        cout<<res<<" ";
        mark++;
    }
    return 0;
}
