// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define ll long long
#define ull unsigned long long
#define Free_palestine           \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int N = 1e6 + 6;
const int Y = 2e5 + 5;
int tt, n, a[N];
ll dp[Y];
int vis[N];
ll solve(int idx, int tt)
{
    if (idx == n)
        return 0;
    if (idx > n + 1)
        return 1e12;
    if (vis[idx] == tt)
        return dp[idx];
    vis[idx] = tt;
    ll op1 = solve(idx + 1, tt) + 1;
    ll op2 = solve(idx + a[idx] + 1, tt);
    return dp[idx] = min(op1, op2);
}
int main()
{
    Free_palestine;
    cin >> tt;
    while (tt)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << solve(0, tt) << endl;
        tt--;
    }
}
