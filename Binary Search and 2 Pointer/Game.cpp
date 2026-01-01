//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n, q; cin>>n >>q ;
    vector<ll>a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    while (q--) {
        ll x;cin>>x;
        auto it = upper_bound(a.begin(),a.end() , x);
        if(it != a.end()) {
            cout<< *it<<endl;
        }else {
            cout<< -1<<endl;
        }
    }
    return 0;
}

