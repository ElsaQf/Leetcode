class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> result = {};
        int n = nums.size();
        if(n < 3){
            return result;
        }
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++){
            int target = -nums[i];
            int font = i + 1;
            int back = n - 1;

            while(font < back){
                int sum = nums[font] + nums[back];

                if(sum < target){
                    font++;
                }else if(sum > target){
                    back--;
                }else{
                    vector<int> temp(3,0);
                    temp[0] = nums[i];
                    temp[1] = nums[font];
                    temp[2] = nums[back];
                    result.push_back(temp);

                    while(font < back && nums[font] == temp[1]){
                        font++;
                    }
                    while(font < back && nums[back] == temp[2]){
                        back--;
                    }
                }
            }
            while(i < n - 2 && nums[i+1] == nums[i]){
                i++;
            }
        }
        return result;
    }
};
