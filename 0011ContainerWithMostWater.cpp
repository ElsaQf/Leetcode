class Solution {
public:
    # 暴力
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
    # 前后向中间逼近（优化）
    int maxArea_2(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int area = 0;

        while(l < r){
            int a = 0;
            if(height[l] < height[r]){
                a = height[l] * (r - l);
                l++;
            }else{
                a = height[r] * (r - l);
                r--;
            }
            if(a > area){
                area = a;
            }
        }
        return area;
    }
};
