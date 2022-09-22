class Solution {
public:
    string reverseWords(string s) {
        
        if(s.length() == 1) return s;
        
        int slow = 0;
        
        for(int fast = 0; fast < s.length(); ++fast) {
            
            if(s[fast] == ' ') {
                
                reverse(s, slow, fast - 1);
                
                slow = fast + 1;
                
            }
            
        }
        
        reverse(s, slow, s.length() - 1);
        
        return s;
        
    }
    
    void reverse(string& s, int left, int right) {
        
        while(left < right) {
            
            swap(s[left], s[right]);
            
            ++left;
            --right;
            
        }
        
    }
};

/*
    This is the second time I had done this problem but I came up with a different solution than before, just not as effective.
    This time, I used a for loop and iterated with an integer rather than using iterators, which made it slower to reverse the
    individual parts of the string. I also had to create a helper function with this solution where in my old solution, I used
    the built-in reverse function that uses iterators to reverse the string.

    The original solution is shown below:

*/

/*
    class Solution {
    public:
        string reverseWords(string s) {
            
            int lastSpace = 0;
            
            for(int i = 0; i < s.length(); ++i) {
                
                if(s[i] == ' ') {
                    
                    reverse(s.begin() + lastSpace, s.begin() + i);
                    
                    lastSpace = i + 1;
                    
                }
                
            }
            
            reverse(s.begin() + lastSpace, s.end());
            
            return s;
            
        }
    };

*/