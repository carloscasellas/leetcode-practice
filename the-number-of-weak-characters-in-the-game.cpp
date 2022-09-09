class Solution {
public:
    
    static bool compare(vector<int>& a, vector<int>& b) { // sorts in descending attack, if same attack then sorts in ascending defense
        
        if(a[0] != b[0]) return a[0] > b[0];
        
        return a[1] < b[1];
        
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(), properties.end(), compare);
        
        int maximum = INT_MIN;
        int count = 0;
        
        for(auto i : properties) {
            
            if(maximum > i[1]) count++;
            else maximum = i[1];
            
        }
        
        return count;
        
    }
};

// practiced using sort function, as well as using a custom function to sort list
// also used for-each notation