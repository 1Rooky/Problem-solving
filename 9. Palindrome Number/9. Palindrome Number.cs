public class Solution {
    public bool IsPalindrome(int x) {
        string y = x.ToString();
        for(int i = 0 ; i < Math.Floor((double)(y.Length / 2)); i++)
            if(y[i] != y[y.Length -1 -i]) return false;
        return true;
    }
}
// The Challenge is to make it without converting int to string you can use mod .. etc but that will be in another day :)