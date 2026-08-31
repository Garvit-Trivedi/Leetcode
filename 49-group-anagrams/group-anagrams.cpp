class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string , vector<string>> m;
     vector<vector<string>> ans;
       for (int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);

            for (int j = 0; j < strs[i].size(); j++) {
                freq[strs[i][j] - 'a']++;
            }
            string key = "";
            for (int j = 0; j < 26; j++) {
                key += to_string(freq[j]) + ",";
            }

            m[key].push_back(strs[i]);
        }

        for(auto&  i :m){
            ans.push_back(i.second);
 
        }
           return ans;
    }
};