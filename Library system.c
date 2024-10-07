#include <stdio.h>

// Number of days overdue
int calculateDaysOverdue(int dueDate, int returnDate) {
    return returnDate - dueDate;
}

//  Fine rate
int determineFineRate(int daysOverdue) {
    if (daysOverdue <= 7) {
        return 20;
    } else if (daysOverdue <= 14) {
        return 50;
    } else {
        return 100;
    }
}

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date ( e.g., 20230930 for 30th Sep 2023): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date ( e.g., 20231005 for 5th Oct 2023): ");
    scanf("%d", &returnDate);

    daysOverdue = calculateDaysOverdue(dueDate, returnDate);

    fineRate = determineFineRate(daysOverdue);

    fineAmount = daysOverdue * fineRate;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %d\n", fineAmount);