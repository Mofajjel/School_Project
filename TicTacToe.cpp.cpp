#include<iostream>
using namespace std;

char board[3][3]={{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}
                     };
 char Turn= 'X';
 int row,column;
 bool draw = false;

void display_board()
{
    system("cls");
     cout<< "\n\n\t---------------------------------------------\n";
     cout<< "\n\n\t------------ WELCOME TO TIC TAC TOE----------\n";
     cout<< "\n\n\t---------------------------------------------\n";
    cout<< " \n\tPlayer 1[X] and Player 2[O] \n";
    cout << "\n\t\t _"<<board[0][0]<<"_|_"<<board[0][1]<<"__|_"<<board[0][2]<<"__\n";
    cout << "\n\t\t _"<<board[1][0]<<"_|_"<<board[1][1]<<"__|_"<<board[1][2]<<"__\n";
    cout << "\n\t\t _"<<board[2][0]<<"_|_"<<board[2][1]<<"__|_"<<board[2][2]<<"__\n";
    cout << "\n\t Player 1[X] turn: \n";
    cout << "\n\t Player 2[O] turn: \n";


}
void player_turn()
{
    int choice;
    if(Turn=='X')
    {
        cout<< "\n\t Player 1 [X] turn\n";
    }
    else if(Turn=='O')
    {
        cout<< "\n\t Player 2 [O] turn\n";
    }
     cin>>choice;
    switch(choice)
    {
    case 1: row=0; column=0; break;
    case 2: row=0; column=1; break;
    case 3: row=0; column=2; break;
    case 4: row=1; column=0; break;
    case 5: row=1; column=1; break;
    case 6: row=1; column=2; break;
    case 7: row=2; column=0; break;
    case 8: row=2; column=1; break;
    case 9: row=2; column=2; break;
    default:
        {
            cout << " Invalid Number please try again \n";
            break;
        }

    }
     if(Turn == 'X' && board[row][column]!='X' && board[row][column]!='O')
        {
         board[row][column]='X';
         Turn = 'O';
        }
        else if(Turn == 'O' && board[row][column]!='O' && board[row][column]!='X')
        {
            board[row][column]='O';
            Turn = 'X';
        }
        else
        {
            cout << " Please try again!!\n Box is filled !! \n";
            player_turn();
        }
        display_board();
}
bool GameOver()
{
    // Checks for Win
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i] )
    return false;

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    // Checks for boxes are not filled
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] !='O')
    return true;

    // Game Draw
    draw=true;
    return false;


}
int main()
{


   while(GameOver())

   {
    display_board();

    player_turn();

    GameOver();
   }
   if(Turn == 'X' && draw == false)
   {
       cout << "\n Player 2[O] wins!!! Congratulations\n";
   }
   else if(Turn == 'O' && draw == false)
   {
       cout << "\n Player 1[X] wins!!! Congratulations\n";
   }
   else
   {
       cout << " GAME IS DRAW !!! PLAY AGAIN !!!/n";
   }



    return 0;
}
