//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
int a[4];
bool found = false;
void back(int i , int sum1 , int sum2) {
    if (i == 4) {
        if (sum1 == sum2) {
            found = true;
        }
        return;
    }
    back(i+1 , sum1+a[i] , sum2);

    back(i+1 , sum1 , sum2 + a[i]);
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    for (int i = 0; i < 4; ++i) {
        cin>>a[i];
    }
    back(0 ,0, 0);
    if (found) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}
