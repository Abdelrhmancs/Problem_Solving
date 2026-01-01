//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,k;cin>>n>>k;
    string s; cin>>s;
    map<char , int > mp ;
    int l{} , r={},c{},ans{};
    while (r<k) {
        mp[s[r]]++;
          if (mp[s[r]] == 1 ){
              c++;
        }
        r++;
    }
    ans = c;
    while (r<n) {
        mp[s[r]]++;
        if (mp[s[r]] == 1) {
            c++;
        }
        mp[s[l]]--;
        if (mp[s[l]]==0)c--;
        l++;r++;
        ans = max(ans,c);
    }
    cout<<ans<<endl;



    return 0;
}

