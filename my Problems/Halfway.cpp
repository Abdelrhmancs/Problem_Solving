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
    ll n ; cin >>n;
    ll sum{};
    int res{};
    for (int i = 1; i <=n; ++i) {
        sum+= (n - i);
        if (sum >= (((n*(n-1)/2)+1)/2)) {
            res = i;
            break;
        }
    }
    cout << res<<"\n";
    return 0;
}
