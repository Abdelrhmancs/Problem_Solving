// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
using namespace std;


int main() {
    int t ; cin>>t;
    while(t--) {
        ll a, b; cin>>a >>b;
        if(a%10 != 0 && b%10 == 0 ) {
            cout << a - (a%10)<<" x "  << b <<" + " <<b <<" x " <<(a%10);
        }else if (a%10 == 0 && b%10 != 0 ) {
            cout << b - (b%10) << " x " << a << " + " << a  << " x " <<(b%10);
        }else if (a%10 != 0 && b%10 != 0 ) {
            cout << (a - a%10) << " x " << (b - b%10)<< " + " << (a - a%10) << " x " << (b%10)<< " + " << (a%10) << " x " << (b - b%10)<< " + " << (a%10) << " x " << (b%10);
        }else {
            cout << a << " x "<< b;
        }
        cout << "\n";
    }
    return 0;
}
