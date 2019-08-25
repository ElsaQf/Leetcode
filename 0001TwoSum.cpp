class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2,0);
        int i=0, j=0, n;
        n = nums.size();

        for(; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    result[0] = i;
                    result[1] = j;
                }
            }
        }
        return result;
    }
};
