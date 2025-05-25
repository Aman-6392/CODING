#include<stdio.h>
struct student
{
    char *name;
    int roll_no;
    int class;
};
union studentdata
{
    char *name;
    int roll_no;
    int class;
};
int main()
{
    struct student str;
    union studentdata uni;
    int sizes,sizeu;
    sizes=sizeof(str);
    sizeu=sizeof(uni);
    printf("Size Of Structure=%d\n",sizes);
    printf("Size Of Union=%d",sizeu);
}