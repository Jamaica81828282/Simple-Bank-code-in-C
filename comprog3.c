#include <stdio.h>

void menu() {
    printf("\n1. Display Information\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void displayInformation(int accNo, char *name, int bal) {
    printf("DISPLAYING INFORMATION...\n");
    printf("Name: %s\n", name);
    printf("Account No: %d\n", accNo);
    printf("Remaining Balance: %d ",bal);
}

int depositMoney(int amount){
    
    printf("YOU ARE ABOUT TO DEPOSIT AN AMOUNT...\n");
    printf("\t\t\tLoading...\n");
    printf("Please enter the amount you want to deposit: ");
    scanf("%d",&amount);
    printf("\nYou have deposit %d into your account.",amount);
    
}
int withdrawMoney(int withdMoney, int balbal){
    printf("You are about to withdraw.\n");
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &withdMoney);
    if(balbal>withdMoney){
    printf("\nYou have withdraw %d in your balance.",withdMoney);
    int total = balbal - withdMoney;
    printf("\nYour remaining balance is %d.",total);
    }
    else{
        printf("You have insufficient amount of balance in your account.");
    }
}

void exitBank(){
    printf("You have exited the Bank of JMJ!\n");
    printf("Hope you comeback again!");
}
int main() {
    char name[50];
    int accNo;
    int numbers;
    int money, balance;
    int amount;
    
    printf("Welcome to The bank of JMJ!\n");
    printf("To log in please enter the following :)\n");

    printf("Enter the name of your bank account: ");
    scanf("%s", name);
    printf("Enter your account number (8-12): ");
    scanf("%d", &accNo);
    printf("\nEnter the amount of balance in your account: ");
    scanf("%d", &balance);
    menu();
    printf("Enter the number of your choice: ");
    scanf("%d", &numbers);
  
   

  

    switch (numbers) {
        case 1:
            displayInformation(accNo, name, balance);
            break;
            case 2:
            depositMoney(money);
            break;
            case 3:
          
            withdrawMoney(money,balance);
            break;
            case 4:
            exitBank();
            break;
        default:
        printf("****Invalid Number!****");
            break;
    }

    return 0;
}
