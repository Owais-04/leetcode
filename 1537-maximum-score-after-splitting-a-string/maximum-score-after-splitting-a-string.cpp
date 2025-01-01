class Solution {
public:
    int maxScore(string s) {
        int sum=0;
        int count0=0;
        int count1=0;
        int leftSum0=0;
        
        int rightSum1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') count0++;
            else count1++;
            
        }
        rightSum1=count1;
      
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0') {leftSum0++;}
            else {rightSum1--;}

            sum=max(sum,leftSum0+rightSum1);
        }
        return sum;
    }
};