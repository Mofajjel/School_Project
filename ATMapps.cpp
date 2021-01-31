#include<iostream>
using namespace std;

void ShowMenu()
{
    cout << "\n\n\t############## MENU ##############\n";
    cout << "\n\n\t$     1. CHECK BALANCE           $\n";
    cout << "\n\n\t$     2. DEPOSIT                 $\n";
    cout << "\n\n\t$     3. WITHDRAW                $\n";
    cout << "\n\n\t$     4. EXIT                    $\n";
    cout << "\n\n\t##################################\n";
}
int main()
{
    int option;
    double balance = 500;

    do
    {
    ShowMenu();
    cout << "\n Option: ";
    cin >> option;
    system("cls");
    switch(option)
    {
    case 1:{
        cout << " BALANCE IS " << balance << " $\n";
        break;
    }
    case 2:
        {
            cout << " DEPOSIT AMOUNT: ";
            double depositAmount;
            cin >> depositAmount;
            balance = balance + depositAmount;
            break;
        }
    case 3:
        {
            cout << " WITHDRAW AMOUNT: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if(withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "SORRY. NOT ENOUGH MONEY.";
            }
            break;
        }
    }
    }while(option != 4);
    return 0;
}
