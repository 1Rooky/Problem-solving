class Solution1 {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> maxCandies;
        int max = 0;
        for(int i : candies){
            if ( i >= max) max = i ;
        }
        for(int i : candies){
            if(i + extraCandies >= max ) maxCandies.push_back(true); else maxCandies.push_back(false);
        }
        return maxCandies;
    }
};

class Solution2 {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> maxCandies(candies.size());
        int max = 0;
        for(int i : candies){
            if ( i >= max) max = i ;
        }
        for(int i= 0  ; i < candies.size();i++  ){
           maxCandies[i] =  candies[i] + extraCandies >= max;
        }
        return maxCandies;
    }
};