/*There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k],
nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and 
become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.*/
int getpivot(vector<int>&arr,int n){
    int s=0;
    int e=n-1;
    int mid=s + (e-s)/2;
    while(s<e){
       if(arr[mid]>=arr[0]){
        s=mid+1;
        }
        else{
             e=mid;
        }
        mid=s + (e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>&arr,int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int pivot=getpivot(nums,size);
        if(target>=nums[pivot] && target<=nums[size-1])
        {  //binary search on left side
          return binarySearch(nums,pivot,size-1,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }


        
    }
};
