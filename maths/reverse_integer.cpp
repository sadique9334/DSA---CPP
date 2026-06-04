/*leetcode problem - 07
  topic : reverse an integer number 
  example:
  Input: x = 123
  Output: 321
  */
class Solution {
public:
    int reverse(int x) {
        int answer=0;
        while(x!=0){
            if(answer>INT_MAX/10 || answer<INT_MIN/10){
                return 0;
                }
            int digit=x%10;
            answer=(answer*10)+digit;
            x=x/10;
        }
        return answer;
    }
};
