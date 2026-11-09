class Solution {
public:
    int binaryGap(int n) {
        int len=0;
        int maxlen=0;
        bool foundOne=false;

        while(n>0){
            int val=n&1;
            n>>=1;

            if(val==1){
                if(foundOne){
                    maxlen=max(maxlen,len);
                }
                len=1;
                foundOne=true;
            }else{
                if(foundOne){
                    len++;
                }
            }
        }
        return maxlen;
    }
};