#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>
    #include <stdlib.h>
     int main()
     {
       int N,X,index;
       scanf("%d",&N);
       int arr[N];
       for(index=0;index<N; index++)
        {
           scanf("%d",&arr[index]);
        }
        scanf("%d",&X);
        for(index=0; index<N; index++)
        {
          if(arr[index]==X)
            {
                printf("yes");
                return 0;
            }
        }
        printf("no");
        return 0;
    }
}
