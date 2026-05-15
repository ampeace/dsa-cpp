#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int maxSubarraySum(vector<int> &arr) {
        
        int currSum = arr[0];
        int maxSum = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            
            currSum = max(arr[i], currSum + arr[i]);
            
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
    }
};

int main() {
    
    Solution obj;
    
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    
    cout << obj.maxSubarraySum(arr);
    
    return 0;
}