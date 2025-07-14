#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX_DIM = 1000;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<vector< ll>> areaSum(MAX_DIM + 1, vector<long long>(MAX_DIM + 1, 0));
        for (int i = 0; i < n; ++i) {
            int h, w;
            cin >> h >> w;
            areaSum[h][w] += h * w;
        }


        for (int i = 1; i <= MAX_DIM; ++i) {
            for (int j = 1; j <= MAX_DIM; ++j) {
                areaSum[i][j] += areaSum[i - 1][j] + areaSum[i][j - 1] - areaSum[i - 1][j - 1];
            }
        }


        for (int i = 0; i < q; ++i) {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;

            ll total_area = areaSum[hb - 1][wb - 1]
                                 - areaSum[hs][wb - 1]
                                 - areaSum[hb - 1][ws]
                                 + areaSum[hs][ws];

            cout << total_area << endl;
        }
    }

    return 0;
}
