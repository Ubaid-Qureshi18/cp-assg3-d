/*
   Name :- Bhavana Rajput
   Roll No.:- 05
   Program Title :- College eligibility form

   Task Given by:-
   Assignee Name :- Rati prasad
   Assignee Roll no :- 04

*/
#include<stdio.h>

int main() {
    char name[50];
    int a, b, c, d;
    float average;

    printf("\t\t\t**COLLEGE ELIGIBILITY FORM**\n\n\n");

    printf("Enter Your Name: ");
    scanf("%s", name); // Use %s for string input
    printf("\nEnter Your 10th Marks (out of 100): ");
    scanf("%d", &a);
    printf("\nEnter Your 12th Marks (out of 100): ");
    scanf("%d", &b);
    printf("\nEnter Your CET Marks (out of 100): ");
    scanf("%d", &c);
    printf("\nEnter Your JEE Main Marks (out of 100): ");
    scanf("%d", &d);

    // Display marks
    printf("\n\n10th Marks: %d/100\n\n12th Marks: %d/100\n\nCET Marks: %d/100\n\nJEE Marks: %d/100\n\n", a, b,c,d);

    // Calculate average
    average = (a + b + c + d) / 4.0;
    printf("Average: %.2f\n", average);

    // Check eligibility
    if (average > 60) {
        printf("YOU ARE ELIGIBLE FOR THIS COLLEGE\n");
    } else {
        printf("SORRY, YOU ARE NOT ELIGIBLE FOR THIS COLLEGE\n");
    }

    return 0;
}

/* OUTPUT
                ***COLLEGE ELIGIBILITY FORM***

Enter your Name:- Devendra Rajput

Enter Your 10th Marks (out of 100):- 89

Enter Your 12th Marks (out of 100):- 86

Enter Your CET Marks (out of 100):- 88

Enter Your JEE Main Marks (out of 100):- 66

10th Marks: 89/100

12th Marks: 86/100

CET Marks: 88/100

JEE Main Marks: 66/100

Average : 82.25
YOU ARE ELIGIBLE FOR THIS COLLEGE
*/