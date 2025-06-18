//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
ll m ;
void lucky(ll n , int idx ) {
    if (n>m)return;
    if (n  == m ) {
        cout<<idx<<"\n";
        return;
    }
    lucky(n*10 + 4 , 2*idx +1);
    lucky(n*10 + 7 , 2*idx +2);
}
int main() {
    Mbappe;
    cin>>m;
    lucky(0,0);
    return 0;
}
