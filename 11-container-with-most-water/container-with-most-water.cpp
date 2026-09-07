class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0;
        int j=n-1;
        int temp=0;
        while(i<j){
            int min_ele = min(height[i],height[j]);
            int res = abs(i-j)*min_ele;
            if(temp < res){
                temp=res;
            }
            else if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        return temp;
    }
};