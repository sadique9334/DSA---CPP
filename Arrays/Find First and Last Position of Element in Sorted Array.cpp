/*Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        //first occurance
        int start=0;
        int end=nums.size()-1;
        vector<int>ans;
        int annn=-1;
        int mid=start+ (end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                annn=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }

        //second occurance
ans.push_back(annn);
start=0;
end=nums.size()-1;
mid=start+ (end-start)/2;
annn=-1;
while(start<=end){
            if(nums[mid]==target){
                annn=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        ans.push_back(annn);
          return ans;
    }
  
};
