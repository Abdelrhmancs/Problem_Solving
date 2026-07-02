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
const int N = 1e5+5;
int spf[N];
vector<int> primes;
// get smallest prime factor (smallest divisor)
void linearSieve(int n=N){
    iota(spf,spf+n,0);
    for(int i=2;i<n;i++){
        if(spf[i]==i) primes.push_back(i);
        for(int p:primes){
            if(p>spf[i]||i*p>=n) break;
            spf[i*p]=p;
        }
    }
}
int main() {
    Abdelrhman;
    linearSieve();
    int n;cin>>n; 
    cout << spf[n];
    

    return 0;
}