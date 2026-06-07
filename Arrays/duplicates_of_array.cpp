/*Leetcode problem : 442
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, 
return an array of all the integers that appears twice.
Approach : created a vector "answer" 
           runs for loop from i=0 to i<size of the vector
           second loop runs from j=i to j<size of the vector
           and the taking xor of both vectors,if result is zero then it is the same element otherwise different.
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]^nums[j])==0){
                    answer.push_back(nums[i]);
                    break;
                    }
                }
            }
             return answer;
        }
};
