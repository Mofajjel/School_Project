#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

const int rows = 10;
const int column = 10;
int maxShip=10;
int matrix[rows][column];

void Clear()
{
    for(int i=0; i< rows; i++)
    {
        for(int j=0; j< column; j++)
        {
            matrix[i][j]=0;
        }
    }
}

void Show()
{

    for(int i=0; i< rows; i++)
    {
        for(int j=0; j< column; j++)
        {
            cout<< matrix[i][j] << " ";
        }
        cout<<endl;
    }

}

int NumberOfShips()
{
    int counting=0;
    for(int i=0; i< rows; i++)
    {
        for(int j=0; j< column; j++)
        {
            if(matrix[i][j]==1)
            {
                counting++;
            }
        }
    }
    return counting;
}
void Setships()
{
    int number_of_ships =0;
    while(number_of_ships < maxShip)
    {
        int x = rand()%rows;
        int y = rand()%column;
        if(matrix[x][y] != 1)
        {
            number_of_ships++;
            matrix[x][y]=1;
        }
    }

}

bool Attack(int x, int y)
{
    if(matrix[x][y]==1)
    {
        matrix[x][y] ==2;
        return true;
    }
    return false;
}



int main()
{
    cout << "\t\t#######################################\n";
    cout << "\t\t###    WELCOME TO SHIP GAME!!!      ###\n";
    cout << "\t\t#######################################\n";
    srand(time(NULL));

   Clear();
   Setships();
   int position_1,position_2;
   char prompt;
   while(1)
   {
       cout << " Please input your location: ";
       cin >> position_1 >> position_2;
       if(Attack(position_1,position_2))
       {
           cout << " You got me :) "<<endl;
       }
       else
       {
           cout << " No Ship at that position! ";
       }
       cout << " Number of ships left: "<<NumberOfShips() <<endl;
       cout << " Do you want to surrender (y/n) "<<endl;
       cin >> prompt;
       if(prompt == 'y')
       {
           break;
       }
   }
   cout << " GAME OVER \n";
   Show();
    system("pause");
    return 0;
}
