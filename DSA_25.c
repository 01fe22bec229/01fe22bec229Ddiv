#include<stdio.h>

struct student
{
    char name[20],srn[13],email[30];
    int roll_no;
    float sgpa;
    long mobile_no;
};

void read_details(struct student *ptr);
void display_details(struct student *ptr);

int main()
{
    struct student s, *ptr;
    ptr=&s;
    printf("Enter student details\n");
    read_details(ptr);
    printf("The student details are:\n");
    display_details(ptr);

    return 0;
}

void read_details(struct student *ptr)
{
    printf("Enter name\n");
    scanf("%s",ptr->name);
    printf("Enter roll number\n");
    scanf("%d",&ptr->roll_no);
    printf("Enter srn\n");
    scanf("%s",ptr->srn);
    printf("Enter email\n");
    scanf("%s",ptr->email);
    printf("Enter sgpa\n");
    scanf("%f",&ptr->sgpa);
    printf("Enter mobile no\n");
    scanf("%ld",&ptr->mobile_no);



}

void display_details(struct student *ptr)

{
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("SRN: %s\n", ptr->srn);
    printf("Email: %s\n", ptr->email);
    printf("sgpa: %0.2f\n", ptr->sgpa);
    printf("Mobile no: %ld\n", ptr->mobile_no);


}
