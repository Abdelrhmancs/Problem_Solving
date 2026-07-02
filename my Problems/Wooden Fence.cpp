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
    int t ; cin>>t;
    while(t--) {
       ll n,x, y;
        cin>> n >> x>>y;
        if ((n + 1) / 2<= x && (n - 1) / 2 <= y) {
            cout<< "YES"<<"\n";
        }else {
            cout << "NO"<<"\n";
        }
    }
    return 0;
}
