class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> wn;
        int mxele = 0;
        int j =0;
        int mx = 0;
        for(int i = 0;i<s.size();i++){
            char c = s[i];
            wn[c]++;
            if(wn[c]>mxele)mxele = wn[c];

            while(((i-j+1)-mxele)>k){
                wn[s[j]]--;
                j++;
            }
            mx = max(mx,i-j+1);
        }
        return mx;
    }
};
