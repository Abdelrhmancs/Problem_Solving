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
const int N = 5e3 + 3;
bool dp[N][N];
bool vis[N][N] , vis2[N][N];
string a;
bool isPlandro(int l , int r) {
    if (l>=r) {
        return 1;
    }
    bool &ret  = dp[l][r];
    if (vis[l][r]) {
        return  ret;
    }
    vis[l][r] = 1;
    return  ret = ((a[l] == a[r]) && isPlandro(l + 1 , r -1 ));

}
int dp2[N][N];
int count(int l , int r) {
    if (l>r) {
        return 0;
    }
    int &ret = dp2[l][r];
    if (vis2[l][r]) {
        return ret;
    }
    vis2[l][r] = 1;
    int op1 = count(l+1 , r);
    int op2 = count(l , r-1);
    int op3 = count(l+1 , r-1);
    return ret = op1 + op2 - op3 + isPlandro(l , r);
}
int main() {
    Mbappe;
    cin >> a;
    int q; cin>>q;
    while(q--) {
        int l , r; cin>>l>>r;
        l--;r--;
        cout<< count(l,r) <<"\n";
    }
    return 0;
}
