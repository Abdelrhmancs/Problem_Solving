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

const int N = 1e5+5;
int leader[N];
vector<int>sz(N);
void init() {
    for (int i = 0; i < N; ++i) {
        leader[i] = i;
        sz[i]=1;
    }
}

int getLeader(int u) {
    if (u == leader[u])
        return u;
    else return  leader[u] = getLeader(leader[u]);
}
void addFriends(int u , int v) {
    u = getLeader(u);
    v = getLeader(v);

    if (u == v) return;

    leader[u] = v;
    sz[v] +=sz[u];
}

bool areFreinds(int u , int v) {
    return getLeader(u) == getLeader(v);
}
int main() {
    Abdelrhman;
    int n,m;cin>>n>>m;
    if (m == 0) {
        cout<<1;
        return 0;
    }
    init();
    while (m--) {
        int u,v;cin>>u>>v;
        addFriends(u,v);
    }
     ll reactions = 0;

    for (int i = 1; i <= n; i++) {
        if (getLeader(i) == i) {
            reactions += (sz[i] - 1);
        }
    }

    cout << (1LL << reactions) << "\n"; // mean 2 power reactions


}
