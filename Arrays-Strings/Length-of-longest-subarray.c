#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d",&n);
	    int arr[n];
	    int longest=0,temp=0;
	    // longest holds the actual largest sub-array.
	    // temp holds the currently largest sub-array.
	    for(i=0;i<n;i++)
	    {
    	    scanf("%d",&arr[i]);
    	}
    	for(i=0;i<n;i++)
        {
            if (arr[i]>=0)
            {
                temp++;
                if (temp>longest)
                    longest=temp;
                // update longest only if the current sub-array(temp)
                // is larger than longest sub-array.
            }
            else
                temp=0;
            // re-setting temp if any -ve number is encountered.
        }
        printf("%d\n",longest);
    }
    
    
	return 0;
}

