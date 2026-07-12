class Solution {
public:
    bool isValid(string s) {
        map<char,char> crs = {{'{','}'},{'[',']'},{'(',')'}};
        stack<int> stk;
        for(char c:s){
            if(crs.find(c)!=crs.end()){
                stk.push(c);
            }
            else if(!stk.empty() && crs[stk.top()] == c){
                stk.pop();
            }
            else{
                return false;
            }
        }
        return stk.empty();
    }
};
