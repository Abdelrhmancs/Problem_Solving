// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr);
vector<int>valid_nums;
// Precomputes all "descending numbers" in binary up to 30 bits (sufficient for 10^9).
// A descending number in binary has all its '1' bits grouped together at the most significant positions,
// followed by trailing '0' bits (e.g., 6 is 110 in binary, 4 is 100 in binary).
//
// Example: For len = 3, ones = 2, zeros = 1:
// - ((1LL << 2) - 1) generates a number with two set bits: 3 (binary: 11)
// - Shifting left by 1 gives: 3 << 1 = 6 (binary: 110), which is a valid descending number.
void precompute() {
    // 30 bits are enough to represent numbers up to 10^9 (since 2^30 > 10^9).
    for (int len = 1; len <= 30; ++len) {
        for (int ones = 1; ones <= len; ++ones) {
            int zeros = len - ones;

            // Construct the number by creating 'ones' consecutive 1s and shifting
            // them left by 'zeros' positions to fill the lower bits with 0s.
            // (1LL << ones) - 1 creates a number with all '1's (e.g., 3 for ones=2).
            ll val = ((1LL << ones) - 1) << zeros;

            valid_nums.push_back(val);
        }
    }
    // Sort the generated numbers to enable fast queries using binary search (lower_bound/upper_bound).
    sort(valid_nums.begin(), valid_nums.end());
}
int main() {
    Abdelrhman;
    precompute();
    int t;cin>>t;
    while (t--) {
        int l,r;cin>>l>>r;
        auto itl = lower_bound(all(valid_nums) , l);
        auto itr = upper_bound(all(valid_nums) , r);
        cout << itr - itl <<"\n";
    }
    return 0;
}
