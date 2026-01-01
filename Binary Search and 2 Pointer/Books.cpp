//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n ;cin>>n ;
    ll  t ; cin>>t;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int l{},r{}, ans{};
    ll sum {};
    while (r<n) {
        sum += a[r];
        if (sum > t) {
            sum-=a[l];
            l++;
        }
        ans = max(ans , r -l +1 );
        r++;
    }

    cout<<ans<<endl;




    return 0;
}

