class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
    };

};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    bool found = 0;    
     for (int i=0 ; i < nums.size()- 1  ; i++){
         for ( int j = i + 1; j < nums.size() ; j++ )
           {   
               if (nums[i] + nums[j] == target){
                   result.push_back(i);
                   result.push_back(j);
                   found = 1; 
               }if (found) break;         
           }if (found) break;
         }
         return result;
    };
};

// I found Solutions That I written in the past in my account on leet code
// so I added both.