//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
using namespace std;
const int N = 1e6 +6 ;
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
    sieve();
    vector<int>v;

    for (int i = 2; i < N; ++i) {
        if (isPrime[i]) {
            v.push_back(i);
        }
    }

    int n , k , c{} ;cin>>n>>k;
    for (int i = 0; i <=n; ++i) {
        int res = v[i]+v[i+1]+1;
        if (res <= n && isPrime[res]) {
            c++;
        }
    }

    if ( c>= k) {
        cout<<"YES"<<"\n";
    }else {
        cout<<"NO"<<"\n";
    }


    return 0;
}
