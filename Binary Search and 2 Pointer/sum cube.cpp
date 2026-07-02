// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
using namespace std;

int main() {
    vector<ll>s;
    for (ll i = 1; i*i*i <=1e12; ++i) {
        s.push_back(i*i*i);
    }
    int t; cin>>t;
    while (t--) {
        ll x;cin>>x;

        bool f = false;
        int l = 0, r = (int)s.size() -1;
        while (l <= r) {
            ll mid = s[l] + s[r];
            if (mid == x) {
                f = true;
                break;
            }else if(mid < x) {
                l++;
            }else {
                r--;
            }
        }
        cout << (f ? "YES":"NO")<< "\n";
    }
    return 0;
}
