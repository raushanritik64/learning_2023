/*
3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/ 
#include<stdio.h>

void totalMarks(int phy, int math, int che, int rollNo, char name[100])
{
    int total = phy + math + che;
    float percentage = (float)total/3;

    printf("\n\n\nRoll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", phy);
    printf("Math Marks: %d\n", math);
    printf("Chemistry Marks: %d\n", che);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    // printf("Name: %s \nRoll Number: %d \nyour total marks is %d with percentage %.2f.",name ,rollNo, total, percentage);
}

int main()
{

    printf("Enter Your Roll Number :");
    int rollNo;
    scanf("%d",&rollNo);

    
    char name[100];
    printf("Enter Your Name: ");
    scanf(" %[^\n]s", name);
    
    printf("Enter Your Physics marks: ");
    int phyMarks;
    scanf("%d",&phyMarks);

    printf("Enter Your Math marks: ");
    int mathMarks;
    scanf("%d",&mathMarks);

    printf("Enter Your Chemistry marks: ");
    int cheMarks;
    scanf("%d",&cheMarks);

    totalMarks(phyMarks,mathMarks,cheMarks,rollNo,name);

     

    return 0;
}