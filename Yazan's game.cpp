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
    int dx[] = {-1, -1 , -1 , 0 ,0 ,0 ,1 ,1 ,1 };
    int dy[] = {-1, 0 , 1 , -1 ,0 ,1 ,-1 ,0 ,1 };

    int n,m; cin>>n>>m;
    int a[n][m];
    set<pair<int, int >>zero;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
            if (a[i][j]  == 0) {
                zero.insert({i,j});
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 1) {
                set<pair<int ,int >>converd;
                for (int k = 0; k < 9; ++k) {
                    int ni = i + dx[k] , nj = j+dy[k];
                    if (ni >= 0 && ni <n && nj >=0 && nj <m) {
                        converd.insert({ni,nj});
                    }

                }
                bool flag = true;
                for (auto z : zero) {
                    if (!converd.count(z)) {
                        flag =false;
                    }
                }
                if (flag) {
                    cout<<"WIN"<<"\n";
                    return 0;
                }
            }

        }
    }
    cout<<"LOSE"<<"\n";


    return 0;
}
