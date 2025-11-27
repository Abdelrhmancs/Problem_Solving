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
    Mbappe;
    int n;cin >> n;
    vector<ll> a(n);
    ll S = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        S += a[i];
    }

    vector<ll> b = a;
    sort(b.begin(), b.end());

    ll mx  = b[n-1];
    ll sec = b[n-2];

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        ll R = S - a[i];

        ll target;
        if (a[i] == mx)
            target = sec;
        else
            target = mx;

        if (2 * target == R)
            ans.push_back(i + 1);
    }

    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    return 0;
}
