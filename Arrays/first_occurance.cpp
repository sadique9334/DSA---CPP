#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
            
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       mid=start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[10]={4,6,9,9,9,9,12,21,22,34};
    int occ=firstocc(arr,10,9);
    cout<<"first occurance = "<<occ;
}
