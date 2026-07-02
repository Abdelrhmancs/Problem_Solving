//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n ; cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int l{} , r{} , ans{};
    while (r<n) {
        while (a[r] - a[l] > 5  ) {
            l++;
        }
        ans = max(ans ,r-l+1);
        r++;
    }
    cout<<ans;

    return 0;
}

