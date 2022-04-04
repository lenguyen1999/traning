#include <stdio.h>
#include <string.h>


// #pragma pack(1)//alignment  = 1byte
// typedef struct 
// {
//     int iNum;//4byte 
//     char cChar;//1byte 
//     long long llNum;//8byte   
// }sTest_Struct1;

// #pragma pack(2)//alignment  = 2byte
// typedef struct 
// {
//     int iNum;
//     char cChar; 
//     long long llNum;
// }sTest_Struct2;

// #pragma pack(4)//alignment  = 4byte
// typedef struct 
// {
//     int iNum;
//     char cChar; 
//     long long llNum;
// }sTest_Struct3;

/* 
Size của struct ít nhất bằng tổng size của các thành phần của struct. 
Mình sử dụng từ “ít nhất” 
là vì size struct còn phụ thuộc vào alignment struct. 
*/

// typedef union 
// {
//     int iNum;
//     char cChar;
//     char cChar1;
//     //if comment var long long -> sizeof(union_test)= 4byte
//     //long long llNum;   
//     //if not comment var long long ->sizeof(union_test)= 8byte
//     //because: Size của union bằng size của thành phần có size lớn nhất trong union.
// } union_test;

typedef struct 
{
    char cChar1,cChar2,cChar3;//3byte
    int iNum1;//4byte
    union //-> 4byte
    {
        int i_uNum1;
        char c_uChar1,c_uChar2,c_uChar3;
    }union_samp;
    
}struct_samp;




int main(void)
{
    printf("\n");
    printf("\tWelcome to the program \n");

    // printf("\tSize of sTest_Struct1 = %d (byte)\n",sizeof(sTest_Struct1));
    // printf("\tSize of sTest_Struct2 = %d (byte)\n",sizeof(sTest_Struct2));
    // printf("\tSize of sTest_Struct3 = %d (byte)\n",sizeof(sTest_Struct3));

    // printf("\tSize of union_test = %d (byte)\n",sizeof(union_test));
    // union_test test_size;
    // printf("\tSize of test_size = %d (byte)\n",sizeof(test_size));
    // test_size.iNum = 0x12345678;
    // printf("\ttest_size.iNum= 0x%x\n",test_size.iNum);
    // printf("\ttest_size.cChar= 0x%x\n",test_size.cChar);
    // printf("\ttest_size.cChar1= 0x%x\n",test_size.cChar1);

    printf("\tSize of struct_samp = %d (byte)\n",sizeof(struct_samp));


   

   
    
  


    printf("\n");
}