class Solution {
public:
    int subtractProductAndSum(int n) {
        int prob=1;
        int sum=0;
        while(n!=0){
            int digit=n%10;
             prob=prob*digit;
             sum= sum +digit;
            
            n=n/10;
        }
        int ans=prob-sum;
        return ans;
        
    }
};
