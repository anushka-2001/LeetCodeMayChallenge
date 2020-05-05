class Solution {
public:
    int findComplement(int num) {
        int n[500];
        int m[500];
        int k=0;
        //to find binary from decimal
        for(int i=0 ;num>0;i++)
        {
            n[i]=num%2;
            num=num/2;
            
        //finding compliment 
        for(int j =i-1;j>=0;j--,k++)
        {
            if(n[j]==0)
                m[k]=1;
            else
                m[k]=0;
        }}
        //to convert array which stores binary value to int
        int i, bin = 0;
      for (i = 0; i < k; i++)
       bin = 10 * bin + m[i];
        //to convert binary to decimal again
        int decimal=0,count=0,rem;
        while(bin!=0)
        {
            rem=bin%10;
            bin/=10;
            decimal+=rem *pow(2,count);
            count++;
        }
        return decimal;
        
    }
};