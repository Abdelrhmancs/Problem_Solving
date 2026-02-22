class Solution {
public:
    vector<vector<int>> ans;

    int solve(int i, int j) {
        if (j == 0 || j == i)
            return ans[i][j] = 1;

        if (ans[i][j] != 0)
            return ans[i][j];

        return ans[i][j] = solve(i - 1, j) + solve(i - 1, j - 1);
    }

    vector<vector<int>> generate(int n) {
        ans.resize(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
                solve(i, j);

        vector<vector<int>> ans2;
        for (int i = 0; i < n; i++) {
            vector<int> v;
            for (int j = 0; j < n; j++) {
                if (ans[i][j] >= 1)
                    v.push_back(ans[i][j]);
            }
            ans2.push_back(v);
        }
        return ans2;
    }
};
