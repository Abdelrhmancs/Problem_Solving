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
const ll Mod = 1073741824 ;
const int N = 1e6+6;;
vector<int>divisors(N);

int main() {
    Mbappe;
    int a,b,c; cin>>a>>b>>c;
    for (int i = 1; i <=a*b*c; ++i) {
        for (int j = i; j <=a*b*c; j+=i) {
            divisors[j]++;
        }

    }
    ll sum{};
    for (int i = 1; i <=a; ++i) {
        for (int j = 1; j <=b; ++j) {
            for (int k = 1; k <=c; ++k) {
                sum+= divisors[i*j*k];
                sum%=Mod;
            }
        }
    }
    cout<<sum<<"\n";



    return 0;
}
