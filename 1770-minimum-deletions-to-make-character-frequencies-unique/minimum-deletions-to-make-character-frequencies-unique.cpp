class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        
        vector<int> freqc;
        for( const auto&pair : freq){
            freqc.push_back(pair.second);
        }

        sort(freqc.begin(),freqc.end(),greater<int>());

        unordered_set<int> usedf;
 int d=0;
        for( int f : freqc){
            while(f>0 && usedf.count(f)){
                f--;
                d++;
            }

            if(f>0){
                usedf.insert(f);
            }
        }
        return d;
    }
};