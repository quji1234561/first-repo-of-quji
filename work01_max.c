#include <stdio.h>
int MAX(int x,int y)
{
    if (x>=y)
       return x;
    if (x<y)
       return y;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d",&a,&b);
    c = MAX(a,b);
    printf("max=%d",c);
    return 0;
}