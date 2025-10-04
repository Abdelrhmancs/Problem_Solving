//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1e5 + 5 ;
int  vis[N];
vector<int>adj[N];

// ...........................
const int NON_VISTIED =0 , VISITED = 2 , INPROGRESS = 1;


//............................
void DFS(int u) {
    vis[u]= true;
    for(int v : adj[u]) {
        if (!vis[v]) {
            DFS(v);
        }
    }
}

// Nondirect Graph
bool IsCycle(int u , int p) {
    vis[u]= true;
    for(int v : adj[u]) {
        if (vis[v] && v != p ) {
            return  true;
        }else if (!vis[v]) {
            if (IsCycle(v,u)) {
                return  true;
            }
        }
    }
    return  false;
}
// Direct graph
bool IsCycleDirect(int u ) {
    vis[u] = INPROGRESS;
    for (int v : adj[u]) {
        if (vis[v] == NON_VISTIED) {
            if (IsCycleDirect(v)) {
                return true;
            }
        } else if (vis[v] == INPROGRESS) {
            return true;
        }
    }
    vis[u] = VISITED;
    return  false;

}
int main() {
    Mbappe;
    int n , start ;cin>>n;
    while (n--) {
        int v,u; cin>>v>>u;
        adj[v].push_back(u);
        start = u;
    }
    for (int i = 0; i < n; ++i) {
        if (IsCycleDirect(i));
    }
    cout<< (IsCycle(start , 1) ?"cycle" : "acycle")<<endl;


    return 0;
}
