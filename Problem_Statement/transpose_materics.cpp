#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    vector<vector<int>> transpose(vector<vector<int>> &mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> ans(m, vector<int>(n));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                
                ans[j][i] = mat[i][j];
            }
        }
        
        return ans;
    }
};

int main() {
    
    Solution obj;
    
    vector<vector<int>> mat = {
        {1, 2},
        {9, -2}
    };
    
    vector<vector<int>> res = obj.transpose(mat);
    
    for(auto row : res) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}