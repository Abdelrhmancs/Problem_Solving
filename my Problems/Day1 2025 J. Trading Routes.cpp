// -----------------------------------------بسم الله الرحمن الرحيم-------------------------------------
// ----------------------------------اللهم صلي وسلم وبارك على نبينا محمد-------------------------------

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Abdelrhman ios::sync_with_stdio(false); cin.tie(nullptr);
#define MAX(v) *max_element(all(v))
#define MIN(v) *min_element(all(v))

struct  monotonic_stack {
    vector<int> next_greater(vector<int>&a) {
        stack<int>st;
        int n = a.size();
        vector<int>res(n,n);
        for (int i = n-1; i >=0; --i) {
            while (!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if (!st.empty()) res[i] = st.top();
            st.push(i);
        }
        return res;
    }
    vector<int> prev_greater(vector<int>&a) {
        int n = a.size();
        stack<int>st;
        vector<int>res(n,-1);
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if (!st.empty()) res[i] = st.top();
            st.push(i);
        }
        return res;
    }
};
int main() {
    Abdelrhman;
    int n ;cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    monotonic_stack s;
    vector<int> l = s.prev_greater(a);
    vector<int> r = s.next_greater(a);

    vector<int>prf_max(n,0) , suffix_max(n,0);
    prf_max[0] = a[0];
    for (int i = 1; i <n; ++i) {
        prf_max[i] = max(prf_max[i-1] , a[i]);
    }
    suffix_max[n-1] = a[n-1];
    for (int i = n-2; i >=0; --i) {
        suffix_max[i] = max(suffix_max[i+1] , a[i]);
    }

    ll res = 1e18;
    for (int i = 1; i < n-1; ++i) {
        int lidx = max(0 , l[i]);
        int ridx = min(n-1 , r[i]);
        ll sum =  0LL + a[i] + prf_max[lidx] + suffix_max[ridx];
        res = min(res , sum);
    }
    cout << res;

    return 0;
}
