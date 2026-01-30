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
    int n, m;
    cin >> n >> m;

    const int MAX = 20000;
    vector<int> dist(MAX + 1, -1);

    queue<int> q;
    q.push(n);
    dist[n] = 0;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == m) {
            cout << dist[x];
            return 0;
        }

        if (x - 1 >= 1 && dist[x - 1] == -1) {
            dist[x - 1] = dist[x] + 1;
            q.push(x - 1);
        }

        if (x * 2 <= MAX && dist[x * 2] == -1) {
            dist[x * 2] = dist[x] + 1;
            q.push(x * 2);
        }
    }
    cout << dist[m] << "\n";
    return 0;
}
