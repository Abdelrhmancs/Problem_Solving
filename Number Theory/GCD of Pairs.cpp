// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr);
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
const int  N = 1e5+5;
bool isPrime[N];
void sieve() {
    fill(isPrime+2 , isPrime+N , true);
    for (int i = 2; i*i < N; ++i) {
        if (isPrime[i]) {
            for (int j = i*i; j < N; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    Abdelrhman;
     sieve();
    int t; cin>>t;
    while (t--) {
        int n ; cin>>n;
        vector<int>a(n+1),b(n+1);
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            a[x]++;
        }
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            b[x]++;
        }
        vector<ll>dp(n+1);
        ll res{};
        for (int i = n; i >=2; --i) {
            ll l{},r{};
            for (int j = i; j <= n; j+=i) {
                l+= a[j];
                r+= b[j];
            }
            dp[i] = l*r;
            for (int j = 2*i; j <=n; j+=i) {
                dp[i]-=dp[j];
            }
            if (isPrime[i]) {
                res+=dp[i];
            }
        }
        cout << res <<"\n";
    }

    return 0;
}
