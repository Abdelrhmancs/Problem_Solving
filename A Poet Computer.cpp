//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;

int main() {
    Mbappe;
    int n ,t=1;
    while (cin>>n && n) {
        vector<string>a(n);
        unordered_map<string,int>mp;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx{};
        for (auto&[k,v]: mp) {
            mx = max(mx , v);
        }
        vector<set<string>>ss(mx);
        for(auto& [k,v] : mp) {
            for (int i = 0; i < v; ++i) {
                ss[i].insert(k);
            }
        }
        vector<int> res;
        for (auto sss : ss) {
            res.push_back(sss.size());
        }
        sort(res.begin(),res.end());
        cout << "Case " << t++ << ": ";
        for(int a : res) {
            cout<<a;
        }
        cout<<"\n";

    }


    return 0;
}
