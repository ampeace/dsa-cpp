#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;
        
        vector<int> ans;
        
        while(top <= bottom && left <= right) {
            
            // Left -> Right
            for(int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;
            
            // Top -> Bottom
            for(int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;
            
            // Right -> Left
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            
            // Bottom -> Top
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    }
};

int main() {
    
    Solution obj;
    
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    vector<int> ans = obj.spirallyTraverse(mat);
    
    for(int x : ans) {
        cout << x << " ";
    }
    
    return 0;
}