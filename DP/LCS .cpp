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
const int N = 3e3  + 3 ;
string a , b;
int dp[N][N];
int solve(int i , int j) {
    if (i == a.size() || j == b.size() ) {
        return 0 ;
    }
    int &ret = dp[i][j];
    if (~ret) {
        return ret;
    }
    if (a[i] == b[j]) {
        return ret = solve(i+1 , j+1) + 1;
    }
    return ret = max(solve(i+1 , j) , solve(i , j+1 ));
}

void print(int i , int j) {
    if (i == a.size() || j == b.size()) {
        return;
    }
    int &ret = dp[i][j];
    if (a[i] == b[j]) {
        cout<<a[i];
        print(i + 1 , j + 1);
        return;
    }
    if (ret == solve(i+1 , j )) {
        print(i+1 , j);
    }else {
        print(i , j +1);
    }
}
int main() {
     Mbappe;
     cin>>a>>b;
     memset(dp , -1 , sizeof dp );
    solve(0  , 0);
    print(0 , 0 );
     return 0;
}
