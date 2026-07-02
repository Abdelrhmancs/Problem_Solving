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
   int n; cin>>n;
   unordered_set<int>s;
   queue<int>q;
   for (int i = 0; i < n; ++i) {
       int x;cin>>x;
       s.insert(x);
       q.push(x);
   }
    int res{};
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        while (!q.empty() && s.find(q.front()) == s.end()) {
            q.pop();
        }

        if (q.front() == val) {
            q.pop();
            s.erase(val);
        } else {
            res++;
            s.erase(val);
        }
    }
    cout <<res <<"\n";



    return 0;
}
