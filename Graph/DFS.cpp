//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1e5 + 5;
vector<int>a[N];
bool visited[N];
void DFS(int u) {
    visited[u] = true;
    cout<<"visited  "<<u<<"\n";
     for(int v  : a[u]) {
         if (!visited[v]) {
             DFS(v);
         }

     }
}

int main() {
    Mbappe;
    int n; cin>>n;
    while (n--) {
       int u , v; cin>>u>>v;
       a[u].push_back(v);
       a[v].push_back(u);
    }
    DFS(0);
    return 0;
}
