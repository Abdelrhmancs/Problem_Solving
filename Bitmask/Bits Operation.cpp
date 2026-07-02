#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
 ll n ,q ; cin>>q>>n;
    while(q--) {
        int op ; cin>>op;
        if(op ==1 ) {
            ll x; cin>>x;
            n|=x;
        } else if(op ==2) {
            ll x ; cin>>x;
            n&=x;
        } else if(op == 3) {
            ll x; cin>>x;
            n^=x;
        } else if(op ==4){
            n = ~n;
        }
        cout<<n<<endl;
    }
    return 0;
}
