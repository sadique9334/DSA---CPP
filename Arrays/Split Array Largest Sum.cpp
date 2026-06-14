/*Split Array Largest Sum
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.
Return the minimized largest sum of the split.
A subarray is a contiguous part of the array.

Example :
Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.

approach used: 
1. first i assume the start is zero and the end is sum of all the elements of the array
2. finds mid 
3. adds elements one by one til sum of subarray < mid
4. f(sum of subarray > mid) then increase the count by 1 and check cases
5. return true if a possible solution and false if solution not found
*/
bool isPossible(vector<int> nums,int size,int k,int mid){
    int splitsum=0;
    int k_count=1;
    for(int i=0;i<size;i++){
        if(splitsum+nums[i]<=mid){
            splitsum+=nums[i];
        }
        else{
            k_count++;
            if(k_count>k || nums[i]>mid){
                return false;
            }
            splitsum=nums[i];
        }
        
    }
    return true;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int e=sum;
        int ans=0;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(nums,nums.size(),k,mid)){
                ans=mid;
                e=mid-1;
                
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};
