class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int len = str.length();
        while(i < len && str[i] == ' '){
            i++;
        }
        long sum = 0;
        int flag = 0;
        if(i < len){
            char t = str[i];
            if(t == '-'){
                flag = 1;
                i++;
                t = str[i];
            }else if(t == '+'){
                i++;
                t = str[i];
            }
            if(t >= '0' && t <= '9'){
                while(i < len && t >= '0' && t <= '9'){
                    int num = t - '0';
                    if(sum > INT_MAX/10){
                        if(flag == 0){
                            return INT_MAX;
                        }else{
                            return INT_MIN;
                        }
                    }else if(sum == INT_MAX/10){
                        if(flag == 0 && num > 7){
                            return INT_MAX;
                        }else if(flag == 1 && num > 8){
                            return INT_MIN;
                        }
                    }
                    sum = sum * 10 + num;
                    i++;
                    t = str[i];
                }
            }else{
                return sum;
            }
        }
        if(flag == 1){
            sum = sum * (-1);
            if(sum < INT_MIN){
                return INT_MIN;
            }
        }
        if(sum > INT_MAX){
            return INT_MAX;
        }
        return sum;
        
    }
};
