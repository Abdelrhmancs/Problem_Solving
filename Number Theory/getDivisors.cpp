// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد----------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr)

vector<ll> getDivisors(ll n) {
    vector<ll> divisors;

    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i != n / i)
                divisors.push_back(n / i);
        }
    }

    return divisors;
}

int main() {
    Abdelrhman;
    
}
