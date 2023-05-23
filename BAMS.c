#include <stdio.h>
#include <ctype.h>

                                                                    /************************\
                                                                    |* The  works  of  the  *|
                                                                    |*     CYBER FATHER     *|
                                                                    |*                      *|
                                                                    \************************/
int main()
{
    //Declared variables
    int i;

    // Assigned Variables
    int menu_option = 0;
    int exit = 0;
    int balance = 0;


    // Arrays



            //Welcome message
    puts("");
    puts("\t\t\t\tWelcome to The Cyber Father Bank, Mauritius\
         \n\t\t\t\t\tWhat would you like to do? ");


            // Transaction Menu
    puts("1.    Create an account");
    puts("2.    Check balance");
    puts("3.    Deposit money");
    puts("4.    Transfer money");
    puts("5.    Withdraw money");
    puts("6.    Show my banking details");
    puts("7.    Close account");
    puts("99.   Exit\n");

    printf("Enter an option: ");
    scanf("%d", &menu_option);


            // Menu option validation
    if ( menu_option == 1 )
    {
        printf("Follow the steps to create an account");
    }
    else if ( menu_option == 2 )
    {
        printf("Your balance is %d", balance);
    }
    else if ( menu_option == 3 )
    {
        printf("Enter the amount you want to deposit");
    }
    else if ( menu_option == 4 )
    {
        printf("Enter the amount you want to transfer ");
    }
    else if ( menu_option == 5 )
    {
        printf("Enter the amount you want to withdraw");
    }
    else if ( menu_option == 6 )
    {
        printf("Your banking details are: ");
    }
    else if ( menu_option == 7 )
    {
        printf("Are you sure you want to close your account? ");
    }
    else if ( menu_option == 99 )
    {
        exit;
    }
    else
    {
        printf("You have entered an invalid option\n");
        printf("Enter an option: ");
        scanf("%d", &menu_option);
    }





    return (0);

}
