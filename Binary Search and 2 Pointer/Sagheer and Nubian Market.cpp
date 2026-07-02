//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;

int n ;
ll s;
vector<ll>a;
bool can(int k , ll &cost  ) {
     vector<ll>sum(n);
     for (int i = 0; i < n; ++i) {
         sum[i] = a[i] + (i+1) * 1LL * k;
     }
    cost =0;
      sort(sum.begin() , sum.end());
     for (int i = 0; i < k; ++i) {
         cost += sum[i];
     }
    return cost <= s;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin>>n>>s;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    ll l = 0 , r = n , mid , mx = 0 , mn = 0  ;
    while (l<=r) {
        mid = (l+r) /2;
        ll  cost ;
        if (can(mid , cost)) {
            mn = mid;
            mx = cost;
            l = mid+1;
        }else {
            r = mid -1;
        }
    }
    cout<<mn <<" " << mx <<endl ;
    return 0;
}
