#include<stdio.h>
int main()
{
	int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d",&n);
	    long int arr[n],max_sum=0;
	    for(i=0;i<n;i++)
	    {
    	    scanf("%ld",&arr[i]);
    	}
    	for(i=1;i<n;i++)
    	{
    	    if ((arr[i]+arr[i-1]) > max_sum)
    	        max_sum = arr[i]+arr[i-1];
    	}
    	printf("%ld\n",max_sum);
    }
	return 0;
}
