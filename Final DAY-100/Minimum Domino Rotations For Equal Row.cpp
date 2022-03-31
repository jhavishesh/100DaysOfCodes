//https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/


//Solution:

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size(),ans=INT_MAX;
        for(int i=1;i<=6;i++){
            int res=0;
            bool ok=true;
            for(int j=0;j<n;j++){
                if(tops[j]==i) continue;
                if(bottoms[j]!=i){
                    ok=false;
                    break;
                }
                res++;
            }
            if(ok) ans=min(ans,res);
            res=0;
            ok=true;
            for(int j=0;j<n;j++){
                if(bottoms[j]==i) continue;
                if(tops[j]!=i){
                    ok=false;
                    break;
                }
                res++;
            }
            if(ok) ans=min(ans,res);
        }
        return (ans==INT_MAX?-1:ans);
    }
};

