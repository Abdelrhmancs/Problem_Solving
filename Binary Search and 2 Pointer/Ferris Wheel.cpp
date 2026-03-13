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

/*

4 10

7 2 3 9

allowed weight = 10

2 3 7 9

2 , 9 -> x

9 -> alone
2 , 7 -> can with each other
3 alone


algo->
1. check if l and r can be with each other
if yes  l ++ , r--
if no r is alone
r --




*/

int main()
{
    Mbappe;
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n - 1, cntr{};
    ll sum{};

    while (l <= r)
    {
        sum = a[l] + a[r];
        cntr++;
        if (l == r)
            break;

        else if (sum <= x)
        {
            l++;
            r--;
        }
        else
        {
            r--;
        }
    }
    cout << cntr << endl;
}
