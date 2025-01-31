class Solution {
public:

    int findPivotIndex(vector<int>& nums){
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        while(start < end){

            if(start == end){
                return start;
            }

            if(mid+1 <n && nums[mid] > nums[mid + 1]){ //yaha mistake ho skti h
                return mid;
            }

            else if(mid-1 >= 0 && nums[mid] < nums[mid-1]){ //condition yaad rakhna
                return mid-1;
            }
            else if(nums[start] > nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }

    int binarySearch(vector<int>& arr, int start, int end, int target){
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target){
                return mid;
            }
            if(target > arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;

        if(target >= nums[0] && target <= nums[pivot]){
            ans = binarySearch(nums, 0, pivot, target);
        }
        else{
            ans = binarySearch(nums, pivot + 1, n - 1, target);
        }
        return ans;
    }
};
