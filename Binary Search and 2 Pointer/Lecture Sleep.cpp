//-----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
//----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n , k ; cin>>n>>k;
    int a[n],b[n];
    for (int i = 0; i < n; ++i) cin>>a[i];
    for (int i = 0; i < n; ++i) cin>>b[i];
    int sum_aw =0 ;
    for (int i = 0; i < n; ++i) {
        if (b[i] == 1) {
            sum_aw+=a[i];
            a[i] = 0;
        }
    }
    int r{},l{},max_ans{}, sum_sleep{};
    while (r < n) {
        sum_sleep+=a[r];
        if (r - l +1 >k) {
            sum_sleep -=a[l];
            l++;
        }
        r++;
        max_ans = max(max_ans , sum_sleep);
    }
    cout<<max_ans + sum_aw<<endl;



    return 0;
}

