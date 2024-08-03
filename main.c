#include <stdio.h>
#include <stdlib.h>
#include "Double_LL.h"
#include "Stack.h"
#include <string.h>
// #include <gtk/gtk.h>

int main(void)
{
    char client_name[1000] = "Mohamed Momen Ahmed";
    char client_name_2[100] = "Yahia 7assan";
    char client_name_3[100] = "GG TT";
    customer_info c1, c2, c3;
    scanf("%[^\n]%*c", &c1.Name);
    c1.money_balance = 900;
    // printf("\n");
    scanf("%[^\n]%*c",&c2.Name);
    c2.money_balance = 150;
    scanf("%[^\n]%*c",&c3.Name);
    c3.money_balance = 90;

    create_Bank_Branches(3);
    display_bank_branches();

    create_customer();
    create_customer();
    create_customer();

    display_customer_info(102, c1, Register);
    display_customer_info(103, c2, Login);
    display_customer_info(103, c3, Login);
    // display_bank_branches();
    // insert_branch();
    // display_bank_branches();
    // delete_branch();
    // display_bank_branches();
    // insert_branch();
    // display_bank_branches();
    // insert_branch();
    // display_bank_branches();
    return 0;
}