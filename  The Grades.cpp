//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin>>t;
    vector<pair<vector<int> ,string>>v(t);

    for (int i = 0; i < t; ++i) {
        cin>>v[i].second ;
        v[i].first.resize(5) ;
        v[i].first[0]=0;
        for (int j = 1; j < 5; ++j) {
            cin>>v[i].first[j];
            v[i].first[0] += v[i].first[j];
        }
    }
    sort(v.begin() , v.end() ,[](const auto& a, const auto& b) {
        if(abs(a.first[0] - b.first[0]) >10) {
            return a.first[0] > b.first[0];
        }else {
            return a.second < b.second;
        }

    });
    for (int i = 0; i < t; ++i) {
        cout<<v[i].second<<" ";
        for (int j = 0; j < 4; ++j) {
            cout<<v[i].first[j]<<" ";
        }
        cout<<v[i].first[4]<<endl;
    }

    return 0;
}

