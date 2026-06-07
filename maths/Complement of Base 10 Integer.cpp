/*leetcode problem 1009
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

approach: i use a mask variable of zero and left shit it to make complement of m */
class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n;
       int mask=0;
       if(n==0)return 1;
       while(m!=0){
        
        m=m>>1;
        mask=(mask<<1)|1;
       }
       int ans=(~n)&mask;
        return ans;
    }
   
};
