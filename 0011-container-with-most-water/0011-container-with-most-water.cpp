class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int r=n-1,l=0,length;
        int area =0;
        int maxArea =0;

        while(r>l){

            length = min(height[r],height[l]);
            area = length*(r-l);
            maxArea = max(maxArea,area);
           if (height[l] < height[r]) {
                l++;
            }
            else {
                r--;
            }
           }
        return maxArea;
        
    }
};