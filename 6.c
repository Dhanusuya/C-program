#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num%4==0)
    {
        if(num%100==0){
            printf("no");
        }
        else
      printf("yes");
    }
    else
    {
        if(num%400==0)
          printf("yes");
        else
          printf("no");
    }
    
    return 0;
}
