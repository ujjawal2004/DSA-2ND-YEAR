class Solution {
public:
    int mySqrt(int x) {
      int low = 1, high = x/2;
        while ( low <= high) {
            int mid = (low + high) /2;
            if (mid > x /mid) {
                high = mid - 1;
                continue;
            }
            if ((mid+1) <= x/(mid+1)) {
                low = mid + 1;
                continue;
            }
            return mid;
        }
        return x;
    }  
};
