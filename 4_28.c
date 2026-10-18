#include <stdio.h>

int main(void) {
    int paycode;
    double managerSalary, hours, hourlyRate, sales, items, itemPay, pay;

    printf("Enter employee paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
            case 1:  // Manager
                printf("Enter fixed weekly salary: ");
                scanf("%lf", &managerSalary);
                pay = managerSalary;
                break;

            case 2:  // Hourly worker
                printf("Enter hours worked: ");
                scanf("%lf", &hours);
                printf("Enter hourly rate: ");
                scanf("%lf", &hourlyRate);

                if (hours <= 40) {
                    pay = hours * hourlyRate;
                } else {
                    pay = 40 * hourlyRate + (hours - 40) * hourlyRate * 1.5;
                }
                break;

            case 3:  // Commission worker
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                pay = 250.0 + sales * 0.057;
                break;

            case 4:  // Pieceworker
                printf("Enter number of items produced: ");
                scanf("%lf", &items);
                printf("Enter pay per item: ");
                scanf("%lf", &itemPay);
                pay = items * itemPay;
                break;

            default:
                printf("Invalid paycode.\n");
                pay = 0;
                break;
        }

        if (paycode >= 1 && paycode <= 4) {
            printf("Weekly pay is: $%.2f\n\n", pay);
        }

        printf("Enter employee paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}