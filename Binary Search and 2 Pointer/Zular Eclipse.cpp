//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second

using namespace std;


int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n ;cin>>n;
    vector<ll>a(n);
    vector<ll>pref(n+1 , 0);

    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    pref[0]=a[0];
    for (int i = 1; i < n+1; ++i) {
        pref[i] = pref[i-1]+a[i];
    }
    ll q; cin>>q;
    while (q--) {
        ll strength;cin>>strength;
        ll idx = upper_bound(a.begin() , a.end() , strength) - a.begin();
        if (idx == 0 ) {
            cout<<-1<<endl;
        }else {
            cout<<idx<<" "<<pref[idx-1]<<endl;
        }

    }
    return 0;
}

