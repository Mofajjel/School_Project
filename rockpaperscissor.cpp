#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
    cout << "---------------------------------------------------\n";
    cout << "---------- WELCOME TO ROCK PAPER SCISSOR ----------\n";
    cout << "---------------------------------------------------\n";
    string player_name;
    cout << " Enter your name: ";
    cin >> player_name;
    system("cls");
    int rounds;
    cout << player_name << " Enter number of rounds you want to play: ";
    cin >> rounds;
    int player_score =0, computer_score =0;
    for(int round=1; round<=rounds; round++)
    {
        system("cls");
        int player_choice,computer_choice;
        cout << " Round number: " << rounds << "/" << round <<endl;
        cout << player_name << " 's score: " << player_score <<endl;
        cout << " Computer score = "<< computer_score <<endl;
        cout << " 1. Rock\n " << " 2. Paper\n " << " 3. Scissor\n ";
        do
        {
            cout << " Select your choice ";
            cin >> player_choice;

        }while( player_choice != 1 && player_choice != 2 && player_choice !=3);
        srand(time(0));
        computer_choice = (rand()%3)+1;
        if(player_choice == 1 && computer_choice == 3)
        {
            cout << player_name << " Wins. Congratulations.\n";
            player_score++;
        }
        else if(player_choice == 2 && computer_choice == 1)
        {
            cout << player_name << " Wins. Congratulations.\n";
            player_score++;
        }
        else if(player_choice == 3 && computer_choice == 2)
        {
            cout << player_name << " Wins. Congratulations.\n";
            player_score++;
        }
        else if(player_choice == computer_choice)
        {
            cout << " GAME IS DRAW. TRY AGAIN \n";
        }
        else
        {
            cout << " Computer Wins. \n";
            computer_score++;
        }
        cout << " Press any button to continue \n";
        getch();

    }
    if(player_score == computer_score)
    {
        cout << " GAME IS DRAW.\n TRY AGAIN.";
    }
    else if(player_score > computer_score)
    {
        cout << player_name << " YOU WON THE GAME.\n CONGRATULATIONS !!!";
    }
    else
    {
        cout << " COMPUTER WON.\n PLEASE TRY AGAIN.";
    }

    return 0;
}
