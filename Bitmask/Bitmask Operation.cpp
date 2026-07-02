#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
 ll n ,q ; cin>>q>>n;
    while(q--) {
        int op ; cin>>op;
        if(op ==1 ) {
            int x; cin>>x;
            cout<<((n>>x) &1)<<endl;
        } else {
            if(op ==2) {
                int x ; cin>>x;
                n|= (1 << x);
            }else if (op ==3) {
                 int x;cin>>x;
                n=n& ~(1 << x);
                }else if(op ==4){
                int x ; cin>>x;
                    n ^= (1 << x);

        }
            cout<<n<<endl;
        }


    }
    return 0;
}
