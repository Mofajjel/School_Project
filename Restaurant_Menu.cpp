#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int purchase_of_pizza=0, purchase_of_burger=0, purchase_of_sandwich=0, purchase_of_icecream=0, purchase_of_cake=0;
    int sales_of_pizza=0, sales_of_burger=0, sales_of_sandwich=0, sales_of_icecream=0, sales_of_cake=0;
    int price_pizza=0, price_burger=0, price_sandwich=0, price_icecream=0, price_cake=0;
    int choice, quantity;
    cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ PURCHASE ITEM $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n";
    cout << "\t Number of Pizza: ";
    cin >> purchase_of_pizza;
    cout << "\t Number of Burger: ";
    cin >> purchase_of_burger;
    cout << "\t Number of Sandwich: ";
    cin >> purchase_of_sandwich;
    cout << "\t Number of Ice Cream: ";
    cin >> purchase_of_icecream;
    cout << "\t Number of Cake: ";
    cin >> purchase_of_cake;
    price:
    system("cls");
    cout << "\t--------- CONTROL PANEL --------- \n";
    cout << "\n 1. Pizza ";
    cout << "\n 2. Burger ";
    cout << "\n 3. Sandwich ";
    cout << "\n 4. Ice Cream ";
    cout << "\n 5. Cake ";
    cout << "\n 6. Details ";
    cout << "\n 7. EXIT ";
    cout << "\n\n Enter your choice: ";
    cin >> choice;



    switch(choice)
    {
    case 1:
        {
            cout << "\n Enter Pizza Quantity: ";
            cin >> quantity;
            if(purchase_of_pizza - sales_of_pizza >= quantity)
            {
                sales_of_pizza += quantity;
                price_pizza += quantity*250;
                cout << "\n\n\t" << quantity << " Pizza sold. Thank you...";

            }
            else
            {
                cout << " \n\n\t SORRY!!! " << purchase_of_pizza - sales_of_pizza << " Pizza Remaining in the Restaurant \n";

            }
        }
        break;
    case 2:
        {
            cout << "\n Enter Burger Quantity: ";
            cin >> quantity;
            if(purchase_of_burger - sales_of_burger >= quantity)
            {
                sales_of_burger += quantity;
                price_burger += quantity*200;
                cout << "\n\n\t" << quantity << " Burger sold. Thank you...";

            }
            else
            {
                cout << " \n\n\t SORRY!!! " << purchase_of_burger - sales_of_burger << " Burger Remaining in the Restaurant \n";

            }
        }
        break;
    case 3:
        {
            cout << "\n Enter Sandwich Quantity: ";
            cin >> quantity;
            if(purchase_of_sandwich - sales_of_sandwich >= quantity)
            {
                sales_of_sandwich += quantity;
                price_sandwich += quantity*150;
                cout << "\n\n\t" << quantity << " Sandwich sold. Thank you...";

            }
            else
            {
                cout << " \n\n\t SORRY!!! " << purchase_of_sandwich - sales_of_sandwich << " Sandwich Remaining in the Restaurant \n";

            }
        }
        break;
    case 4:
        {
            cout << "\n Enter Ice Cream Quantity: ";
            cin >> quantity;
            if(purchase_of_icecream - sales_of_icecream >= quantity)
            {
                sales_of_icecream += quantity;
                price_icecream += quantity*50;
                cout << "\n\n\t" << quantity << " Ice Cream sold. Thank you...";

            }
            else
            {
                cout << " \n\n\t SORRY!!! " << purchase_of_icecream - sales_of_icecream << " Ice Cream Remaining in the Restaurant \n";

            }
        }
        break;
    case 5:
        {
            cout << "\n Enter Cake Quantity: ";
            cin >> quantity;
            if(purchase_of_cake - sales_of_cake >= quantity)
            {
                sales_of_cake += quantity;
                price_cake += quantity*100;
                cout << "\n\n\t" << quantity << " Cakes sold. Thank you...";

            }
            else
            {
                cout << " \n\n\t SORRY!!! " << purchase_of_cake - sales_of_cake << " Cake Remaining in the Restaurant \n";

            }
        }
        break;
    case 6:
        {
            system("cls");
            cout << "\n\n\t========== Details Panel ========= ";
            cout << "\n Purchase Pizza Quantity: "<< purchase_of_pizza;
            cout << "\n Sales Pizza Quantity: "<< sales_of_pizza;
            cout << "\n Remaining Pizza Quantity: "<< purchase_of_pizza - sales_of_pizza;
            cout << "\n Total Pizza Price in a day: "<<price_pizza;
            cout << "\n Purchase Burger Quantity: "<< purchase_of_burger;
            cout << "\n Sales Burger Quantity: "<< sales_of_burger;
            cout << "\n Remaining Burger Quantity: "<< purchase_of_burger - sales_of_burger;
            cout << "\n Total Burger Price in a day: "<< price_burger;
            cout << "\n Purchase Sandwich Quantity: "<< purchase_of_sandwich;
            cout << "\n Sales Sandwich Quantity: "<< sales_of_sandwich;
            cout << "\n Remaining Sandwich Quantity: "<< purchase_of_sandwich - sales_of_sandwich;
            cout << "\n Total Sandwich Price in a day: "<< price_sandwich;
            cout << "\n Purchase Ice Cream Quantity: "<< purchase_of_icecream;
            cout << "\n Sales Ice Cream Quantity: "<< sales_of_icecream;
            cout << "\n Remaining Ice Cream Quantity: "<< purchase_of_icecream - sales_of_icecream;
            cout << "\n Total Ice Cream Price in a day: "<< price_icecream;
            cout << "\n Purchase Cake Quantity: "<< purchase_of_cake;
            cout << "\n Sales Cake Quantity: "<< sales_of_cake;
            cout << "\n Remaining Cake Quantity: "<< purchase_of_cake - sales_of_cake;
            cout << "\n Total Cake Price in a day: "<< price_cake;
            cout << "\n\n Total Day Price : "<< price_burger+price_pizza+price_sandwich+price_icecream+price_cake;




        }
        break;
    case 7:
        exit(0);
    default:
        {
            cout << "\n Invalid number !!! Please try again....\n";
        }

    }

    getch();
    goto price;



}
