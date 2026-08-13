// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
// this two lines decrease the time of compilation when use logical operations
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr)
const int N = 15e4+5;
int main() {
    Abdelrhman;
    int n, q;
    cin >> n >> q;
    int a[N];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll res{};
        int  s = k-l;
        for (int i = l; i <= r; ++i) {
            res += a[i] ^ (s+i);
        }
        cout << res << "\n";
    }


    return 0;
}
