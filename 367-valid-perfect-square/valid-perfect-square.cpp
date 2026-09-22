class Solution {
public:
    bool isPerfectSquare(int num) {
        long long  i = 1;
        long long j=num;
        while(i<=j){
            long long mid = i+(j-i)/2;
            long long squ=mid*mid;
            if(squ==num){
                return true;
            }
            else if(squ<num){
             i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
    }
};