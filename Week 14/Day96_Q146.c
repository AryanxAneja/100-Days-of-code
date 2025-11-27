//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    char name[50];
    int id;
    float salary;
    struct Date join;
};

int main(){
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %d-%d-%d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}