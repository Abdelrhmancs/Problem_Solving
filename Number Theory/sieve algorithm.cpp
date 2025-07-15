//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N = 1e6 +6 ;
bool isPrime[N];
void sieve() { // O(N log(log N)) mean O(N) * constant mean O(N)
    fill(isPrime+2 , isPrime+N ,true);
    for (int i = 2; i*i < N; ++i) {
        if (isPrime[i]) {
            for (int j = i*i; j < N; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}
int main() {
    Mbappe;
    sieve();
    for (int i = 0; i < 50; ++i) {
        if (isPrime[i]) {
            cout<<i<<"\n";
        }
    }



    return 0;
}

