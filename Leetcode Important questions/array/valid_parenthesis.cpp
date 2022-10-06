class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(temp.size()==0)
            {
                temp.push(s[i]);
            }
           else if((temp.top()=='(' && s[i]==')')||(temp.top()=='{' && s[i]=='}')||(temp.top()=='[' && s[i]==']'))
            {
                temp.pop();
                
            }
            else
                temp.push(s[i]);
        }
        if(temp.size()==0)
            return true;
        
            return false;
    }
};