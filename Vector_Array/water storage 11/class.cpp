

/*
using 2 pointer .
directly copy and paste in leetcode 

*/
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int len = height.size();
            int maxArea = 0;
            int left = 0;
            int right = len - 1;

            while(left < right) {
                int area = (right - left) * min(height[left], height[right]);
                maxArea = max(maxArea, area);

                if (height[left]  < height[right]) {
                    left += 1;
                }
                else{
                    right -= 1;
                }
            }
            return maxArea;



        }
    };

