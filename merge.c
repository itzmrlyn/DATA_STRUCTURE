#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int m,a[20],b[20],c[20],i,n,j,temp;
	
	printf("Enter the size of 1st array : \n");
	scanf("%d",&m);
	printf("Enter the elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size of 2st array : \n");
	scanf("%d",&n);
	printf("Enter the elements\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	//merge
    for(i=0; i<n+m; i++)
    {
     if(i<m)
     {
        c[i]=a[i];
     }
     else
     {
         c[i]=b[i-m];
     }
    }
    printf("Merge : \n");
    for(i=0;i<=m+n-1;i++)

	{
		printf("%d\t",c[i]);
	}
	//sort
    for(i=0;i<m+n;i++)
    {
      for(j=i+1;j<m+n;j++)
       {
	    if(c[i]>c[j])
         {
        	temp=c[i];
	        c[i]=c[j];
        	c[j]=temp;
	     }
       }
    }
    
printf("\nArray after sorting : \n");
for(i=0;i<=n+m-1;i++)
 {
	printf("%d\t",c[i]);
 }

return 0;
}
