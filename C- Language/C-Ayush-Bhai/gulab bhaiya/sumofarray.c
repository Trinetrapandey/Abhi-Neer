#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],i,j,c[2][3];
    printf("enter the value of matrix a \n");
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           scanf("%d",&a[i][j]);
        }
        
    }
    printf("enter the value of matrix b \n");
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           scanf("%d",&b[i][j]);
        }
        
    }
    printf("addition of  value of matrix (a+b) \n");
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}
