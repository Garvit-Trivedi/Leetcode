class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
     int l=0;
     int r=tokens.size()-1;
     int maxscore = 0;
     int score = 0;
     while(l<=r){
        if(power >= tokens[l]){
            power-=tokens[l];
            score++;
            l++;
            maxscore = max(maxscore , score);
        }else if(score >=1){
             power+=tokens[r];
             score--;
             r--;
        }else{
            break;
        }
     }
     return maxscore;
    }
};