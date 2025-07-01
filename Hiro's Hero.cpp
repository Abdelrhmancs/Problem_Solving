//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1000000007;
// how to get mod of huge value 

ll modpow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main() {
    Mbappe;
    int t; cin>>t;
    while (t--) {
        int n ;cin>>n;
        cout<<(n*(modpow(2,n-1,N))%N )<<"\n";
    }


    return 0;
}
// problem link 
//https://codeforces.com/group/2QN7VVtg4T/contest/618821/problem/D
