class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.length();
        if(numRows == 1){
            return s;
        }
        
        char a[numRows][len] = {' '};
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < len; j++){
                a[i][j] = ' ';
            }
        }
        int k = 0;
        int i = 0, j = 0;
        while(k < len){
        	while(i < numRows && k < len){
        		a[i][j] = s[k];
        		i++;
        		k++;
			}
			if(i == numRows){
				i -= 2;
				j++;
				while(i >= 0 && k < len){
					a[i][j] = s[k];
					i--;
					j++;
					k++;
				}
			}
			i += 2;
			j--;
        }
        string str(len, ' ');
         k = 0;
         for(int i = 0; i < numRows; i++){
             for(int j = 0; j < len; j++){
                 char t = a[i][j];
                 if(t != ' '){
                     str[k] = t;
                     k++;
                 }
             }
         }
         str[k] = '\0';
        
        return str;
    }        
};
