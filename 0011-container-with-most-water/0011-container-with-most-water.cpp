class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0, area;
        int left = 0, right = height.size()-1;
        while(left<right){
            if(height[left]<height[right]){
                area = (right-left) * height[left];
                left++;
            }
            else{
                area = (right-left) * height[right]; 
                right--;
            }
            maxarea = max(maxarea, area);
        }
        return maxarea;
    }
};