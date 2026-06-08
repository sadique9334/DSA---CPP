/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.*/
int squareroot(int n){
    int s=0;
    int e=n-1;
    long long int mid=s+(e-s)/2;
    int ans;
    
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
            
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;
}
class Solution {
public:
    int mySqrt(int x) {
        return squareroot(x);
        
    }
};
