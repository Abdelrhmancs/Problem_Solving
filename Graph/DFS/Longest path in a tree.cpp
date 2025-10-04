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
const int N = 1e4 + 4;
int n, u, v;
vector<int> adjList[N];
bool vis[N];
int mx{}, mxnode;
void DFS(int node, int d)
{
    if (d > mx)
    {
        mx = d;
        mxnode = node;
    }
    vis[node] = true;
    for (int x : adjList[node])
    {
        if (!vis[x])
            DFS(x, d + 1);
    }
}
int main() {
    Mbappe;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    DFS(1, 0);
    for (int i = 1; i <= n - 1; i++)
    {
        vis[i] = false;
    }
    DFS(mxnode, 0);
    cout << mx;

    return 0;
}
