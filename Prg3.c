#include<stdio.h>
int main();
struct date
{
    int day;
    int month;
    int year;
};
struct student {
    int id;
    char name[20];
    float marks;
    struct date dob;
};
int main() {
    struct student s1= {101,"Gagan",85.5,{15,8,2000}};
    printf("name: %s\n", s1.name);
    printf("dob: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0; 
}

