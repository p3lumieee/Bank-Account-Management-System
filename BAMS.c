#include <stdio.h>
#include <ctype.h>
#include <string.h>

                                                                    /************************\
                                                                    |* The  works  of  the  *|
                                                                    |*     CYBER FATHER     *|
                                                                    |*                      *|
                                                                    \************************/
int main()
{
    // Dummy user info
    char username[] = "Moraanu";
    char password[] = "password12345";

    //Declared variables
    int i, user_result, pass_result;
    int dep_amnt;


    // Assigned Variables
    int login = 1;
    int menu_option = 0;
    int exit = 0;
    int balance = 0;

    char user_login[8];
    char pass_login[14];

    // Login Page
    do{
        // Prompt for username
        printf("Enter your username: ");
        fgets(user_login, 8, stdin);
        user_result = strcmp(username, user_login);

        // Verify username
        if (user_result == 0){
            login = user_result;
        }

    }
    while(login == 1);

    login = 1;

    do{
        // Prompt for password
        printf("Enter your password: ");
        fgets(pass_login, 14, stdin);
        pass_result = strcmp(password, pass_login);

        // Verify Password
        if (pass_result == 0){
            login = pass_result;
        }

    }
    while(login == 1);


            //Welcome message
    puts("");
    printf("\t\t\t\tWelcome to the Cyber Father Bank, Mauritius\
         \n\t\t\t\tHi %s, what would you like to do?\n", username);


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
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &dep_amnt);
        printf("Success, you deposited %d", dep_amnt);
        balance = balance + dep_amnt;
        printf(" and your balance is %d", balance);

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
