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
const int N = 3e5+5;
vector<int>beat;
vector<int>res;

void init() {
    for (int i = 1; i < beat.size(); ++i) {
        beat[i] = i;
    }
}

int getLeader(int u) {
    if (u == beat[u])
        return u;
    else return beat[u] = getLeader(beat[u]);
}

int main() {
    Abdelrhman;
    int n,m; cin>>n>>m;
    beat.resize(n+2);
    res.assign(n + 1, 0);
    init();
    while (m--) {
        int l ,r,x;cin>>l>>r>>x;
        int st  = getLeader(l);
        while(st <=r) {
            if (st == x) {
                st = getLeader(st+1);
                continue;
            }
            res[st] = x;
            beat[st] = getLeader(st +1);
            st = getLeader(st);
        }
    }
    for (int i = 1; i <=n; ++i) {
        cout << res[i] << " ";
    }
}