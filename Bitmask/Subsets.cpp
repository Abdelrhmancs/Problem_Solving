#include <bits/stdc++.h>
#define ll long long
#define ON(n,k) ((n) | (1 << k))
#define IsON(n,k) (((n)>>(k)) & 1)
#define OFF(n,k) ((n) | ~(1<<k))
using namespace std;

int main() {
  int n ; cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    
    vector<vector<int>>allsub;

    for(int mask = 0; mask<(1<<n); mask++) {
        vector<int>sub;
        for (int i=0; i<n; i++) {
            if(mask & (1<<i)) {
                sub.push_back(arr[i]);
            }
        }
        allsub.push_back(sub);
    }
    sort(allsub.begin() , allsub.end());
    for(auto it : allsub) {
        for (auto i : it) {
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}
