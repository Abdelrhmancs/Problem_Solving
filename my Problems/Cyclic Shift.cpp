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
    int t ; cin>>t;
    while(t--) {
        int n ;cin>>n;
     string s1, s2; cin>>s1>>s2;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                a.push_back(i);
            }

        }
        if (a.empty()) {
            cout << "YES"<<"\n";
            continue;
        }
        if (a.size() == 1) {
            cout << "NO\n";
            continue;
        }
        bool f = true;
        for (int i = 0; i < a.size(); i++) {
            if (s1[a[i]] != s2[a[(i-1+a.size())%a.size()]]) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "YES"<<"\n";
        }else {
            cout << "NO"<<"\n";
        }
    }
    return 0;
}
