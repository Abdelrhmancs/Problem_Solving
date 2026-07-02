#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;

        int max_mex_sum = 0;
        for (int i = 0; i < n; ++i) {
            
            if (row1[i] == '0' && row2[i] == '1' || row1[i] == '1' && row2[i] == '0') {
                
                max_mex_sum += 2;
            } else if (row1[i] == '0' && row2[i] == '0') {
                
                max_mex_sum += 1;
                if (i + 1 < n && (row1[i + 1] == '1' && row2[i + 1] == '1')) {
                    max_mex_sum += 1; 
                    i++; 
                }
            } else if (row1[i] == '1' && row2[i] == '1') {
                
                if (i + 1 < n && (row1[i + 1] == '0' || row2[i + 1] == '0')) {
                    
                    max_mex_sum += 2;
                    i++; 
                }
            }
        }

        cout << max_mex_sum << endl;
    }

    return 0;
}
