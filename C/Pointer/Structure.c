#include <stdio.h>
#include<string.h>
struct Subject
{
    char sub_name[30];
    int sub_id;
    char sub_duration[50];
    char sub_type[50];
};
int main()
{
    struct Subject sub;
    struct Subject *ptr;
    ptr = &sub;
    strcpy (sub.sub_name, " Computer Science");
    sub.sub_id = 1201;
    strcpy (sub.sub_duration, "6 Months");
    strcpy (sub.sub_type, " Multiple Choice Question");
    printf (" Subject Name: %s\t ", (*ptr).sub_name);
    printf (" \n Subject Id: %d\t ", (*ptr).sub_id);
    printf (" \n Duration of the Subject: %s\t ", (*ptr).sub_duration);
    printf (" \n Type of the Subject: %s\t ", (*ptr).sub_type);
    return 0;     
}  