class Solution{
    
    // Function to find largest and second largest element in the array
    public static ArrayList<Integer> largestAndSecondLargest(int sizeOfArray, int arr[])
    {
        ArrayList<Integer> result=new ArrayList<Integer>();
        int max=arr[0],smax=-1;
        for(int i=1;i<sizeOfArray;i++)
        {
            if(arr[i]>max)
                {
                    smax=max;
                    max=arr[i];
                }
            else if(arr[i]<max)
            {
                if(smax==-1||arr[i]>smax)
                    smax=arr[i];
            }
        }
       result.add(max);
       result.add(smax);
       return result;
    }
}
