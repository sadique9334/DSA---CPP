/*Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:
[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.*/
int getmin(vector<int>&nums,int size){
    int start=0;
    int end=size-1;
    int mid= start + (end-start)/2;
    while(start<end){
        if(nums[mid]==nums[end]){
            end--;
        }
        else if(nums[mid]>nums[end]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return nums[start];
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        return getmin(nums,nums.size());
        
    }
};
