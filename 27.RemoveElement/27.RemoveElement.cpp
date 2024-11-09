// I added all the acceptted solutions I submitted in the file 
// starting from the first submitted answer to the last

class Solution1 {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val ){
                counter++;
                nums[i]= val+1;
                swap(nums[i],nums[nums.size()-counter]);
                i--;
            }
        }
        return nums.size()-counter;
    }
};

class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val ){
                swap(nums[i],nums[nums.size()-1]);
                nums.pop_back();
                i--;
            }
        }
        return nums.size();
    }
};

class Solution3 {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val ){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

class Solution4 {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val ){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};