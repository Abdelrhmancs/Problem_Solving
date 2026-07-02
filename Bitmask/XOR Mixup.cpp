#include <bits/stdc++.h>
#define ll long long
#define ON(n,k) ((n) | (1 << k))
#define IsON(n,k) (((n)>>(k)) & 1)
#define OFF(n,k) ((n) | ~(1<<k))
using namespace std;

int main() {
  int t; cin>>t;
  while (t--) {
   int n ; cin>>n;
      int arr[n];
      int k =n-1;
       for (int i =0; i<n; i++) {
           cin>>arr[i];
       }
       int xor_ =0 ;

       for(int i =0 ; i<n-1; i++) {
           for (int j=0; j<n-1; j++) {
               if(j != k)
               xor_ ^=arr[j];
           }
           if(xor_ == arr[k]) {
               break;
           }
           k--;
       }
      cout<<arr[k]<<endl;
  }
    return 0;
}
