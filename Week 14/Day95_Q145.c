//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student{
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student s[], int n){
    int topIndex = 0;

    for (int i = 1; i < n; i++){
        if (s[i].marks > s[topIndex].marks){
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main(){
    struct Student students[5];
    for (int i = 0; i < 5; i++){
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    struct Student topper = getTopStudent(students, 5);
    printf("\n--- Top Student ---\n");
    printf("Name      : %s\n", topper.name);
    printf("Roll No   : %d\n", topper.roll_no);
    printf("Marks     : %.2f\n", topper.marks);
    return 0;
}