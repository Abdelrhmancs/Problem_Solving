//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
using namespace std;

int main() {
    Mbappe;
    ll n ,k ;cin>>n>>k ;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int  l{}, r{},sum{},res{};
    while (r<n) {

       sum+=a[r];
        while (sum >k && l<=r) {
            sum-=a[l];
            l++;
        }
        if (sum == k ) {
            res++;
        }
        r++;

    }
    cout<<res<<"\n";


    return 0;
}
