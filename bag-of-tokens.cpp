class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(), tokens.end(), less<int>());
        
        if(tokens.size() == 0 || *tokens.begin() > power) return 0;
        
        int left = 0; int right = tokens.size() - 1; int score = 0; // will use these to iterate thru list
        
        while(left <= right) {
            
            if(power >= tokens[left]) {
                
                power -= tokens[left];
                ++left;
                ++score;
                
            } else {
                
                if(right - left > 1) { // makes sure that there is more than two instances left
                    // if there is two the flips will cancel out
                    
                    power += tokens[right];
                    --right;
                    --score;
                    
                } else break;
                
            }
            
        }
        
        return score;
        
    }
};

/*  
    Practiced traversing a list with left and right pointers as well as critical thinking. This problem was tough
    for me because of the rule where score decreases when you flip a token down, but I was able to see that if
    there are two or less instances in the list and there is not enough power, the score will always go down or
    stay the same.
*/