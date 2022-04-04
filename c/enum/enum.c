#include <stdio.h>

// typedef enum 
// {
//     Sunday, 
//     Monday, 
//     Tuesday, 
//     Wednesday, 
//     Thursday, 
//     Friday, 
//     Saturday
// }week;

//----------------
enum designFlags 
{
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

int main(void)
{
    printf("\n");
    printf("\tWelcome to the program \n");
    //------------------start program------------------------------------
    // creating today variable of enum week type
    
    // week today;
    // today = Wednesday;
    // printf("Day %d",today+1);

    int myDesign = BOLD | UNDERLINE;  //or

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

	printf("%d", myDesign);

    myDesign = myDesign & ITALICS;

    if (myDesign & ITALICS) 
    {
    // code for italics
    printf("%d", myDesign);
    }



    



    //------------------end program--------------------------------------
    printf("\n");
    return 0;
}