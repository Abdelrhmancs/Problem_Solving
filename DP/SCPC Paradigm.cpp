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
/*
in the problem
we need to mini number of ops
ops -> change any char to any char you want

Solve ret --> min num of ops

tar [s , c , p , c]

State : idx , idxOfTar
1 , 0


BaseCase:

if idx == n
return tar == tar.size ?? 0 : 1e8

if tar == tar.size return


Transition:

if the current char is the tar ->
move to the next tar and update the idx also

if not the current char is the tar ->
change it to the tar Or
don't change it
go to the next idx with the same tar

asc

ssc

*/
const int N = 1e5 + 5;
int dp[N][5];
int t, n;
string a, tar;

int solve(int idx, int tidx)
{
    if (idx == n)
        return tidx == tar.size() ? 0 : 1e8;
    if (tidx == tar.size())
        return 0;
    int &ret = dp[idx][tidx];
    if (~ret)
        return ret;
    if (a[idx] == tar[tidx])
        return ret = solve(idx + 1, tidx + 1);

    int op1 = solve(idx + 1, tidx + 1) + 1;
    int op2 = solve(idx + 1, tidx);

    return ret = min(op1, op2);
}

int main()
{
    Mbappe;

    tar = "scpc";
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        memset(dp, -1, sizeof dp);
        cout << solve(0, 0) << endl;
    }
}
