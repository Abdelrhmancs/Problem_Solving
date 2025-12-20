//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
const int N =3000+5;
bool isPrime[N];
void sieve() {
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
    int n ;cin>>n;
    sieve();
    int res{};
    for (int i = 2; i <=n; ++i) {
        int c{};
        for (int j = 2; j <=i; ++j) {
            if (isPrime[j] && i%j ==0) c++;
        }
        if (c == 2)res++;
    }
    cout<<res<<"\n";

    return 0;
}

