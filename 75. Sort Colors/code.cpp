//this question is solved without sorting technique
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left =0;
        int index = 0;
        int right =nums.size() - 1;
        int n = nums.size() - 1;
        
        while(index <= right){
            if(nums[index] == 0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else if(nums[index] == 2){
                swap(nums[index],nums[right]);
                right--;
            }
            else{
                index++;
            }
        }
    }
};