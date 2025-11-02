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

int main() {
    Mbappe;
    int t; cin>>t;
    while (t--) {
        int n,q;cin>>n>>q;
        vector<int> pref(n+1+0);
        for (int i = 1; i <=n; ++i) {
            cin>>pref[i];
        }
        sort(pref.rbegin() , pref.rend());
        for (int i = 1; i <=n; ++i) {
            pref[i] = pref[i-1] + pref[i];
        }

        while (q--) {
            int x; cin>>x;
            auto ans = lower_bound(all(pref),x );
                if (ans != pref.end()) {
                    cout<<ans - pref.begin()+1<<"\n";
                }else {
                    cout<<"-1"<<"\n";
                }
        }
    }
    return 0;
}
