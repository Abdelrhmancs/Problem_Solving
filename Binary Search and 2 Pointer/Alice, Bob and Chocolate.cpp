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
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int l{}, r = n-1 ,alc{} ,popc{};
    ll alic {},pop = {};
    while (l<=r) {
        if (alic <= pop) {
            alic+=a[l++];
            alc++;
        }
        else {
            pop+=a[r--];
            popc++;
        }
    }
    cout<<alc<<" "<< popc<<"\n";

    return 0;
}
