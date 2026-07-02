//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    ll m ;cin>>m;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int l{},r{},ans =   INT_MAX;
    ll sum{};
    while (r<n){
        sum+=a[r];
        while (sum >= m) {
            ans = min(ans , r-l+1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if(ans == INT_MAX) {
        cout<<-1;
    }else {
        cout<<ans<<endl;
    }





    return 0;
}

