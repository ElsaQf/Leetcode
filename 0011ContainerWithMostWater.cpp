class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int n = height.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int a = min(height[i], height[j]) * (j - i);
                if(a > area){
                    area = a;
                }
            }
        }
        return area;
    }
};
