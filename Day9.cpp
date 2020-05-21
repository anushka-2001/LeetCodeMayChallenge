class Solution {
public:
    bool isPerfectSquare(int num) {
       if(num == 1)
            return true;
        int low = 2, up = num/2+1;
        while(low < up)
        {
            long mid = low + (up - low) /2;
            if(mid * mid == num)
                return true;
            if (mid * mid > num)
            {
                up = mid;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
};