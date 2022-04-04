#include <stdio.h>

int in_so_thu_tu(void)
{
 static int x = 0;
 x = x + 1;
printf("\t%d\r\n",x);
}

int main()
{
    printf("\n");
    printf("\tWelcome to the program \n");
    
    int i;
    for (i = 0; i < 5; i++)
    {
        /* code */
        in_so_thu_tu();
    }
    printf("\t%d\r\n",x);
    

    printf("\n");
    return 0;
}