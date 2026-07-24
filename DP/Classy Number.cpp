// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr);
const int N = 18;
ll n, dp[N + 1][4][2];
string a;
ll solve(int idx, int rem, bool f) {
    if (rem > 3) return 0;
    if (idx >= n) return 1;

    ll &ret = dp[idx][rem][f];
    if (~ret) return ret;
    ret = 0;
    if (f) {
        for (int i = 0; i <= (a[idx] - '0'); ++i) {
            ret += solve(idx + 1, rem + (i > 0), i == (a[idx] - '0'));
        }
    } else {
        for (int i = 0; i <= 9; ++i) {
            ret += solve(idx + 1, rem + (i > 0), 0);
        }
    }
    return ret;
}

ll build(string s) {
    n = s.size();
    a = s;
    memset(dp, -1, sizeof dp);
    return solve(0, 0, 1);
}

int main() {
    Abdelrhman;
    int t;
    cin >> t;
    while (t--) {
        string l,r;
        cin >> l >> r;
        cout << build(r) - build(to_string(stoll(l) - 1)) <<"\n";
    }

    return 0;
}
