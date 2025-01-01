class Solution {
public:
    int maxScore(string s) {
        int left = 0;
        int right = 0;
        int best = INT_MIN;

        for(int i = 0; i<s.size()-1; i++){
            if(s[i] == '1'){
                right++;
            }
            else{
                left++;
            }
            best = max(best,left - right);
        }
        if(s[s.size()-1] == '1'){
            right++;
        }
        return best + right;
    }
};