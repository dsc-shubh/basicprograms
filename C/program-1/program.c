#include<stdio.h>
int main()
{
   /*initialization */
    int n,i,j;
    printf("enter the number of rows"); /*Input the number of rows */
    scanf("%d",&n);/* the no of rows is n*/
    for(i=1;i<=n;i++)   /*condition */ /*for loop*/
    {
        for(j=1;j<=i;j++)
        {
            printf("   %d",j); /*output */
        }
        printf("\n");
    }return 0;
}
