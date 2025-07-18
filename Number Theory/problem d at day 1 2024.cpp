//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mbappe ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;

int main() {
    Mbappe;
    int t;
    cin >> t;
    while (t--)
    {
        int R, n;
        cin >> R >> n;
        double ratio = 3.0 - 2.0 * sqrt(2.0);
        double result = R * pow(ratio, n);
        cout << fixed << setprecision(8) << result << endl;
    }
    return 0;
}

