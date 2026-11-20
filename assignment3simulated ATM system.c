// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void Menu();
void CheckBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
int changepin(int pin);
int main()
{
    int pin = 1234;
    int enteredpin;
    int newpin;
    int choice;
    int attempts = 0;
    float balance = 10000.0;
    float amount;

    printf("===== ATM Machine =====\n");

    while(attempts < 3)
    {
        printf("Enter your pin :");
        scanf("%d" , &enteredpin);

        if(enteredpin == pin)
        {
            printf("Login Successfully\n");
            break;
        }

        attempts++;

        printf("Incorrect PIN\n");
        printf("attempts remaining:%d\n", 3 - attempts);

        if(attempts == 3)
        {
            printf("Too many incorrect attempts.\n");
            printf("Account temporarily blocked.\n");
        }
    }

    do{
        Menu();
        printf("Enter your Choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                CheckBalance(balance);
            break;

            case 2:
                deposit(balance);
            break;

            case 3:
                withdraw(balance);
            break;

            case 4:
                changepin(pin);

                 if("newpin != pin")
                 {
                     pin = newpin;
                 }
            break;

            case 5:
                printf("Thankyou for using the ATM\n");
                printf("Have a nice day\n");
            break;

            default:
                printf("Invalid choice! Please try again\n");
            break;
        }
    }while(choice != 5);

    return 0;
}
void Menu()
{
    printf("----- Menu -----\n");
    printf("1.Check Balance\n");
    printf("2.Deposit money\n");
    printf("3.Withdraw Money\n");
    printf("4.Change pin\n");
    printf("5.Exit\n");
}
void CheckBalance(float balance)
{
    printf("Current Balance:%.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("Enter amount to deposit:");
    scanf("%f", &amount);

    if(amount <= 0)
    {
        printf("Invalid amount\n");
    }
    else{
        balance += amount;

        printf("%.2f deposited successfully.\n",amount);
        printf("New Balance:%.2f\n", balance);
    }
    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("Enter amount to withdraw:");
    scanf("%f", &amount);

    if(amount <= 0)
    {
        printf("Invalid amount\n");
    }
    else if(amount > balance)
    {
        printf("Insufficient balance\n");
    }
    else{
        balance -= amount;

        printf("Please collect your cash.\n");
        printf("%.2f withdraw successfully\n", amount);
        printf("Remaining Balance:%.2f\n", balance);
    }
    return balance;
}

int changepin(int pin)
{
    int currentpin;
    int newpin;

    printf("Enter our current PIN:");
    scanf("%d", &currentpin);

    if(currentpin != pin)
    {
        printf("Incorrect PIN\n");

        return pin;
    }

    printf("Enter your new 4-digit PIN:");
    scanf("%d", &newpin);

    if(newpin >= 1000 && newpin <= 9999)
    {
        printf("PIN changed successfully\n");

        return newpin;
    }
    else{
        printf("PIN must contain exactly 4 digits");
    }

}










