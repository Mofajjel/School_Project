#include<iostream>

using namespace std;

int main()
{
    int user_input; // takes the input from user
    int amount=0; // calculates the total amount
    int counts=0; // counts the amount of money
    int c=0; // counts the number of cars
    int r=0; // counts the number of rickshaw
    int b=0; // counts the number of buses

    // MENU
    while(true)
    {
    cout << "*********** MENU ************************************************** \n";
    cout << "***\t PRESS 1 FOR RICKSHAW. COST OF PARKING IS TK 100. \n";
    cout << "***\t PRESS 2 FOR CARS OR TAXI. COST OF PARKING IS TK 200. \n";
    cout << "***\t PRESS 3 FOR BUSES. COST OF PARKING IS TK 300. \n";
    cout << "***\t PRESS 4 TO SHOW THE RECORD. \n";
    cout << "***\t PRESS 5 TO DELETE THE RECORD. \n";
    cout << "**********************************************************************\n";
    cin >> user_input;


    if(user_input==1)
    {
        if(counts <= 50)
        {
        amount=amount+100;
        counts=counts+1;
        r++;
        system("cls");
        cout << " Rickshaw is added \n";
        }
        else
        {
            cout<< "PARKING IS FULL.\n";
        }
    }
    else if(user_input==2)
    {
        if(counts <= 50)
        {
        amount=amount+200;
        counts=counts+1;
        c++;
        system("cls");
        cout << "Car is added \n";
        }
        else
        {
            cout<< "PARKING IS FULL.\n";
        }
    }
    else if(user_input==3)
    {
        if(counts <= 50)
        {
        amount=amount+300;
        counts=counts+1;
        b++;
        system("cls");
        cout << "Bus is added \n";
        }
        else
        {
            cout<< "PARKING IS FULL.\n";
        }
    }
    else if(user_input==4)
    {
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
        cout << "$$\t TOTAL AMOUNT IS " << amount <<endl;
        cout << "$$\t TOTAL VEHICLE PARKED: " << counts <<endl;
        cout << "$$\t TOTAL RICKSHAW PARKED: "<< r <<endl;
        cout << "$$\t TOTAL CARS OR TAXIS PARKED: "<< c <<endl;
        cout << "$$\t TOTAL BUSES PARKED: " << b <<endl;
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    }
    else if(user_input==5)
    {
        amount=0;
        counts=0;
        b=0;
        c=0;
        r=0;
        cout << "000000000000000000000000000000\n";
        cout << "000\t RECORD DELETED    000 \n";
        cout << "000000000000000000000000000000\n";
    }
    else
    {
        cout << " INVALID NUMBER!!!\n PLEASE TRY AGAIN.\n";
    }
    }

}
