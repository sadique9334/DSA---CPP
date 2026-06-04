/*
LeetCode 1 - Two Sum
Difficulty: Easy
Approach:
- Use nested for loops
- Store element and index
- Check if sum== target exists

Time Complexity: O(n^2)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // vector<int> ans;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                
                if(nums[i]+nums[j]==target){
                    return{i,j};
                    // ans.push_back(i);
                    // ans.push_back(j);
                }
            }
         
        }
        return {};
    }
};
