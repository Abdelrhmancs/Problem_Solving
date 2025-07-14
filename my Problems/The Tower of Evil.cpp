// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
#define input freopen("evil.in", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    author_EzzEldine

        input;
    int t;
    cin >> t;
    string out;
    out.reserve(t * 4);
    while (t--)
    {
        ll h, w, d;
        cin >> h >> w >> d;
        ll k = (h - 1) % (2LL * (w - 1));
        ll col;
        if (k < w)
        {
            col = k + 1;
        }
        else
        {
            col = 2LL * (w - 1) - k + 1;
        }
        out += (col == d ? "Yes\n" : "No\n");
    }
    cout << out;

    return 0;
}
