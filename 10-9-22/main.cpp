class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> str;
        for(int i =0;i<s.size();i++){
            while(!str.empty() && (str.top() == s[i])){
                str.pop();
                i++;
            }
            if(i>=s.size()){
                break;
            }
            str.push(s[i]);
        }
        string ptr="";
        while(!str.empty()){
            ptr+= str.top();
            str.pop();
        }
        reverse(ptr.begin(),ptr.end());
        return ptr;
    }
};
