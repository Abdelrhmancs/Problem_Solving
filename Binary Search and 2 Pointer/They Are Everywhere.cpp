//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin>>n;
    char a[n];
    set<char>s;
    map<char , int >m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        s.insert(a[i]);
    }
    int r{} , l {} , ans = n , c{} ;
    while (r<n) {
        m[a[r]]++;
        if (m[a[r]] ==1 )c++;

        while (c == s.size()) {
            ans  = min(ans , r - l +1);
            m[a[l]]--;
            if (m[a[l]] == 0)c--;
            l++;
        }

        r++;
    }
    cout<<ans<<endl;

    return 0;
}
