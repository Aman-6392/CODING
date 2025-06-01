#include<stdio.h>  
int main()  
{  
    int i;  
    char Array[3][6] = {"Black", "Blame", "Block"};  
    printf("String Array: \n");  
    for(i = 0; i < 3; i++)  
    {  
        printf("%s\n", Array[i]);
    }
}  