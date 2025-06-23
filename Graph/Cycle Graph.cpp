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
bool vis[N];
vector<int>adj[N];

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

int main() {
    Mbappe;
    int n , start ;cin>>n;
    while (n--) {
        int v,u; cin>>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);
        start = u;
    }
    cout<< (IsCycle(start , 1) ?"cycle" : "acycle")<<endl;


    return 0;
}
