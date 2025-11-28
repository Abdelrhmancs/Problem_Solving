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
const int N = 3e4  + 4 ;
int a[] = {1,5,10,25,50};
int n ;
ll dp[6][N];
ll solve(int i , int last) {
    if (last == n) {
        return 1;
    }
    if (last > n || i == 5) {
        return 0;
    }
    ll &ret =  dp[i][last];
    if (~ret) {
        return ret;
    }
    ll op1 = solve(i , last + a[i]);
    ll op2 = solve(i+1 , last);
    return ret = op1 + op2 ;

}


int main() {
     Mbappe;
       while (cin>>n) {
           memset(dp , -1 , sizeof dp);
           if (solve(0 , 0) == 1) {
               cout << "There is only "<<solve(0 , 0)<<" way to produce " << n<<" cents change."<<"\n";
           }else {
               cout << "There are "<<solve(0 , 0)<<" ways to produce " << n<<" cents change."<<"\n";
           }
       }




     return 0;
}
