#include <stdio.h>
// like we already defined the size of the inputs
#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50

struct Employee {
    int code;
    char name[MAX_NAME_LENGTH];
    int join_year;
};


// and also the main function 
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
    int current_year;

    // over here emplyee will have the option to input there data and 
    printf("Enter employee details (enter 0 for employee code to finish):\n");
    while (num_employees < MAX_EMPLOYEES) {
        printf("Employee code: ");
        scanf("%d", &employees[num_employees].code);
        
        if (employees[num_employees].code == 0) {
            break;
        }

        printf("Name: ");
        scanf("%s", employees[num_employees].name);

        printf("Joining year: ");
        scanf("%d", &employees[num_employees].join_year);

        num_employees++;
        printf("\n");
    }

    // Input current year
    printf("Enter current year: ");
    scanf("%d", &current_year);

    // Display employees with tenure >= 3 years
    printf("\nEmployees with tenure of 3 or more years:\n");
    for (int i = 0; i < num_employees; i++) {
        int tenure = current_year - employees[i].join_year;
        if (tenure >= 3) {
            printf("%s (Employee Code: %d)\n", employees[i].name, employees[i].code);
        }
    }

    return 0;
}
