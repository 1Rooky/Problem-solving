class Solution1 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n != 0)
        { 
            bool isMerged = false;
            for (int i = 0 ; i <= n-1 ; i++)
            {    
                isMerged = false;
                for(int j = 0; j <= m+n-1 ; j++)
                {
                    if(nums1[j] >= nums2[i]){
                    for(int k = m+n-1 ; k > j ; k --)
                    {
                        nums1[k] = nums1[k-1];
                    }
                    nums1[j] =nums2[i];
                    isMerged = true;    
                    break;              
                    }
                  if(!isMerged) nums1[m +i] =nums2[i];  
                }
            }
        }
    }
};

class Solution2 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = --m + --n;
        while (n >= 0)
            nums1[i--] = m >= 0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    }
};