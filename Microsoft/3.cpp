/* Bulls and Cows*/

class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0;
        int b=0;
    map<char,int>mp;
    map<char,int>mp2;
    
        for(int i=0;i<secret.size();i++){
        
            if(secret[i]==guess[i]){
           
            a++;
            }
            else
            {
                (mp[guess[i]]>0) ? mp[guess[i]]--, b++:mp2[guess[i]]++;
                (mp2[secret[i]]>0) ? mp2[secret[i]]--,b++:mp[secret[i]]++;
            }
           
        }
        

        string A=to_string(a);
        string B=to_string(b);
        string ans=A+"A"+B+"B";
    return ans;
    }
};