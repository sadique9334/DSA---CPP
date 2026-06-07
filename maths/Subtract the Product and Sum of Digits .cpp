/*leetcode problem no : 1281
  Subtract the Product and Sum of Digits of an Integer
Given an integer number n, return the difference between the product of its digits and the sum of its digits.*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n!=0){
            int last_elem=n%10;
            product=product*last_elem;
            sum+=last_elem;
            n=n/10;
        }
        return product-sum;
    }
};
