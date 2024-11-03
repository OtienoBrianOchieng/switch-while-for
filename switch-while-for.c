#include <stdio.h>

int main () {
    // days of the week
    int day;
    printf("Enter number between 1 and 7: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf ("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;    
    default:
        printf("Enter days between 1-7");
        break;
    }


// calculator
    char operator;
    printf("Choose one of these operators [+, -, *, /]");
    scanf("%c", &operator);

    printf("Enter numb1 and numb2");
    double numb1;
    double numb2;
    double result;
    scanf("%lf", &numb1);
    scanf("%lf", &numb2);

    switch(operator) {
        case '+':
            result = (numb1 + numb2);
            printf("%lf", result);
            break;
        case '-':
            result = (numb1 - numb2);
            printf("%lf", result);
            break;
        case '/':
            result = (numb1 / numb2);
            printf("%lf", result);
            break;
        case '*':
            result = (numb1 * numb2);
            printf("%lf", result);
            break;
        default:
            printf("Invalid input");       

    }



// While loops

// while
int age = 1;
while (age < 5) {
    int twiceSon = age*2;
    
    printf("Age is %d \n", twiceSon);
    age = age + 1;

}
// do while
do {
    int twiceSon = age*2;
    
    printf("Age is %d \n", twiceSon);
    age = age + 1;

} while (age<5);


// for loop
int sum = 0;
for(int age = 1; age <= 50; age++){
    sum = sum + 1;
};

printf("%d", sum);
    
}