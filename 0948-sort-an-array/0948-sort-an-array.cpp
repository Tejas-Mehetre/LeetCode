class Solution {
public:
    void merge(vector<int>& array, int low, int mid, int high){
        int n1 = mid - low + 1;
        int n2 = high - mid;

        vector<int> left(n1), right(n2);
        for(int i = 0; i<n1; i++){
            left[i] = array[low+i];
        }
        for(int i = 0; i<n2; i++){
            right[i] = array[mid+1+i];
        }

        int i = 0, j = 0, k = low;
        while(i<n1 && j<n2){
            if(left[i] <= right[j]){
                array[k] = left[i++];
            }
            else{
                array[k] = right[j++];
            }
            k++;
        }

        while(i<n1){
            array[k++] = left[i++];
        }

        while(j<n2){
            array[k++] = right[j++];
        }
    }

    void mergeSort(vector<int>& array, int low, int high){
        if(low<high){
            int mid = low + (high-low) / 2;
            mergeSort(array, low, mid);
            mergeSort(array, mid+1, high);
            merge(array, low, mid, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};