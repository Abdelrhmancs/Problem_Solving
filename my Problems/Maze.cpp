//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define Mbappe  ios::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
string path;
int n , m;
char grid[100][100];
void Maze(int r , int c) {
    if (r == n-1 && c == m-1) {
        cout<<path<<endl;
        return;
    }

    if (c+1 < n && grid[r][c+1] != '#') {
        path.push_back('R');
        Maze(r,c+1);
        path.pop_back();

    }

    if (r+1 <m && grid[r+1][c] != '#') {
        path.push_back('D');
        Maze(r+1,c);
        path.pop_back();
    }
}


int main() {
    Mbappe;
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>grid[i][j];
        }
    }
    Maze(0,0);
    return 0;
}
