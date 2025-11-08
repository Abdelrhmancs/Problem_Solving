//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))
using namespace std;
const int OO = LLONG_MIN;
int n;
vector<int>a;
int dp[20][25];
int solve(int i, int last)
{
    if (i == n)
        return 0;
    if (dp[i][last] != -1)
        return  dp[i][last];

    int op1 =00 , op2 = OO;
    if (a[i] > last) {
        op1 = solve(i + 1, a[i]) + 1;
    }

    op2 = solve(i + 1, last);
    return  dp[i][last] = max(op1, op2);
}
int main() {
    Mbappe;
    cin>>n;
    a.resize(n);
    memset(dp , -1 , sizeof dp);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<solve(0,0);
    return 0;
}
