public class Solution {
    public string MergeAlternately(string word1, string word2) {
        string mergedString ="";
        int w1Length = word1.Length;
        int w2Length = word2.Length;
        int commonLength =  Math.Min(w1Length,w2Length);

        for(int i= 0 ; i < commonLength; i++){
                    mergedString+= word1[i];
                    mergedString+= word2[i];
        }
        if( w1Length > w2Length)
           for(int i= w2Length ; i < w1Length; i++) mergedString+= word1[i];
        else if(w2Length > w1Length) 
            for(int i= w1Length ; i < w2Length; i++)
                 mergedString+= word2[i];     
    return mergedString;
    }
}