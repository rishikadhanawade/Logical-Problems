//User function Template for Java

class Solution {
    public boolean isPrime(int N) {
      if(N<=1)
            return false;
        if(N==2)
            return false;
        if(N%2==0)
            return false;
        for(int i=3;i*i<=N;i=i+2)
        {
            if(N%i==0)
                return false;
        }
        return true;
    }
}
