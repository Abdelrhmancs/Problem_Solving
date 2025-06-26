//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1e5 +5 ;
vector<int>adj[N];
int main() {
    Mbappe;
    int n;cin>>n;

    for (int i = 2; i <=n; ++i) {
         int u ; cin>>u;
         adj[u].push_back(i);
    }
    bool flag = true;
    for (int i = 1; i <=n; ++i) {
        if (adj[i].size() == 0) continue;

        int leaf{};
        for (int el : adj[i]) {
            if (adj[el].empty() ) {
                leaf++;
            }
        }

        if (leaf < 3) {
            flag = false;
            break;
        }
    }
    cout<< (flag? "Yes":"No")<<"\n";

    return 0;
}
