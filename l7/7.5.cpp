#include <stdio.h>
#include <string.h>
#define MAX 100

struct Customer {
    char name[50];
    int account_no;
    float balance;
};

int main() {
    struct Customer cust[MAX];
    int n, i;
    int maxIndex = 0, minIndex = 0;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", cust[i].name);
        printf("Account No: ");
        scanf("%d", &cust[i].account_no);
        printf("Balance: ");
        scanf("%f", &cust[i].balance);

        // Track highest and lowest
        if (cust[i].balance > cust[maxIndex].balance) {
            maxIndex = i;
        }
        if (cust[i].balance < cust[minIndex].balance) {
            minIndex = i;
        }
    }

    printf("\nCustomer with Highest Balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", 
           cust[maxIndex].name, cust[maxIndex].account_no, cust[maxIndex].balance);

    printf("\nCustomer with Lowest Balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", 
           cust[minIndex].name, cust[minIndex].account_no, cust[minIndex].balance);

    return 0;
}
