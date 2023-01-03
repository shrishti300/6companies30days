/*You are given an array of strings tokens that
 represents an arithmetic expression in a Reverse 
 Polish Notation.*/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int>s;

     for(int i=0;i<tokens.size();i++){

        if(tokens[i]=="+"){
          int a=s.top();
          s.pop();
          int b=s.top();
          s.pop();
          s.push(a+b);
        }
        else if(tokens[i]=="-"){
         int a=s.top();
         s.pop();
         int b=s.top();
         s.pop();
         int res=b-a;
         s.push(res);
        }
        else if(tokens[i]=="*"){
       int a=s.top();
         s.pop();
         int b=s.top();
         s.pop();
         int res=b*a;
         s.push(res);
        }
        else if(tokens[i]=="/"){
           int a=s.top();
         s.pop();
         int b=s.top();
         s.pop();
         int res=b/a;
         s.push(res);
        }
        else
        s.push(stoi(tokens[i]));
     }
     return s.top();
    }
};
