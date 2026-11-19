#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("enter a value:");
    for(i=0;i<4;i++)
    {scanf("%d",&a[i]);
    }
        
        printf("reverse array:\n");
        for(i=4;i>0;i--)
        {
            printf("%d",a[i]);

    }
    return 0;
}
