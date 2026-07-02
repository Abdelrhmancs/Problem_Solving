//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;


int main() {
    Mbappe;
    ll n,m;cin>>n>>m;
    ll a[n], b[m];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    sort(a,a+n);
    for (int i = 0; i < m; ++i) {
        int res{};
        int l{} , r = n-1 ;
        while (l<=r) {
            int mid = (l+r)/2;
            if (a[mid] <=b[i]) {
                res = mid +1;
                l = mid+1;
            }else {
                 r = mid-1;
            }
        }
        cout<<res<<" ";
    }



    return 0;
}
