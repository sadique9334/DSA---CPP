#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i;j>0;j--){
            if(temp<arr[j-1]){
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else{break;}
        }
    }
}
