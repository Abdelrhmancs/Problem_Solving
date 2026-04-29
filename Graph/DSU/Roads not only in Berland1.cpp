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
const int N = 1e3 +3;
int leader[N];
vector<pair<int,int>>cycle;
void init(int n){
    for(int i =1; i<=n; i++){
        leader[i] = i;
    }
}
int getLeader(int u){
    if(leader[u] == u)
        return u;
    return leader[u] = getLeader(leader[u]);
}

void connect(int u , int v){
    int x = u , y = v;
    u = getLeader(u);
    v = getLeader(v);
    if(u != v){
        leader[u] = v;
    }else 
        cycle.push_back({x, y});
}
int main() {
    Abdelrhman;
    int n; cin >> n;
    init(n);
    for(int i = 0, u, v; i < n - 1; i++){
        cin >> u >> v;
        connect(u, v);
    }
    vector<int> b;
    for(int i = 1; i <= n; i++){
        if(getLeader(i) == i){
            b.push_back(i);
        }
    }
    cout << cycle.size() << "\n";
    
    for(int i = 0; i < cycle.size(); i++){
        cout << cycle[i].F << " " << cycle[i].S << " " << b[i] << " " << b[i+1] << "\n";
    }
    
    return 0;
}
