class Solution {
public:
    string longestPalindrome(string s) {
        int num[1000][2] = {0};
        int len = s.length();
        int count = 0;
        
        
        for(int i = 0, k = i; i < len; i = k){
            int j = len - 1;
            while(j > i){
                int t = j;
                if(s[i] == s[j]){
                    while(i < j && s[i] == s[j]){
                        i++;
                        j--;
                    }
                    if(i < j){
                    	i = k;
                    	j = t - 1;
                    	continue;
                    }else{
                        num[count][0] = k;
                        num[count][1] = t;
                        count++;
                    }
                }else{
                    j--;
                }
            }
            k++;
        }
        
        int max = num[0][1] - num[0][0];
        int index = 0;
        for(int i = 1; i < count; i++){
            int temp = num[i][1] - num[i][0];
            if(max < temp){
                max = temp;
                index = i;
            }
        }
        string str;
        str.assign(s, num[index][0], max+1);
        
        return str;
    }
};
