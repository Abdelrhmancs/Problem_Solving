// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr);
const int N = 12;
int dp[N+1][(1 << N)][(1 << N)] , n;
int a[N][N][N];
int solve(int x, int masky,int maskz) {
    if (x == n) return 0;

    int&ret = dp[x][masky][maskz];
    if (~ret) return ret;

    ret = 1e9;
    for (int i = 0; i < n; ++i) {
        if (!((1 << i)& masky)) {
            for (int j = 0; j < n; ++j) {
                if (!((1 << j) &  maskz)) {
                    ret = min(ret , solve(x + 1 , ((1 << i)| masky) , ((1 << j) | maskz))+ a[x][i][j]);
                }
            }
        }
    }
    return  ret;
}

int main() {
    Abdelrhman;
    cin>>n;
    memset(dp , -1 , sizeof dp);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                cin>>a[i][j][k];
            }
        }
    }
    cout << solve(0,0,0);
    return 0;
}
