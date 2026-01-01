//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second'
#define ld long double
using namespace std;
ld can(ld n , int c) {
    return n*c* log2(n);
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int c ;
    ld time ;
    cin>>c >> time ;
    ld  l = 1 , r = time/ c ,  mid , ans =1;
    while (r - l >1e-7) {
        mid =(l + r) /2;
        if ( can(mid , c) <= time) {
            ans = mid ;
            l = mid;
        }else {
            r = mid ;
        }
    }
    cout<<fixed << setprecision(6) << ans <<endl;
    return 0;
}
