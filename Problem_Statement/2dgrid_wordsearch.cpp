#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    
    bool searchWord(vector<vector<char>>& grid, string word,
                    int x, int y) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        // Check all 8 directions
        for(int dir = 0; dir < 8; dir++) {
            
            int nx = x;
            int ny = y;
            int k;
            
            for(k = 0; k < word.size(); k++) {
                
                if(nx < 0 || ny < 0 || nx >= n || ny >= m ||
                   grid[nx][ny] != word[k]) {
                    break;
                }
                
                nx += dx[dir];
                ny += dy[dir];
            }
            
            // Word found
            if(k == word.size()) {
                return true;
            }
        }
        
        return false;
    }
    
    vector<vector<int>> searchWord(vector<vector<char>>& grid,
                                   string word) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                
                if(grid[i][j] == word[0] &&
                   searchWord(grid, word, i, j)) {
                    
                    ans.push_back({i, j});
                }
            }
        }
        
        return ans;
    }
};

int main() {
    
    Solution obj;
    
    vector<vector<char>> grid = {
        {'G','E','E','K','S','F','O','R','G','E','E','K','S'},
        {'G','E','E','K','S','Q','U','I','Z','G','E','E','K'},
        {'I','D','E','Q','A','P','R','A','C','T','I','C','E'}
    };
    
    string word = "GEEKS";
    
    vector<vector<int>> ans = obj.searchWord(grid, word);
    
    for(auto x : ans) {
        cout << "{" << x[0] << "," << x[1] << "}" << endl;
    }
    
    return 0;
}