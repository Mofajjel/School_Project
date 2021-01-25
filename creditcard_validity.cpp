#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int sum_even = 0;
    string oddnum;
    string oddnum_temp;
    cout << "Enter an 8 digit card credit card number: " << endl;
    string number;
    cin >> number;

int length  =  number.length();

if (length != 8)
{
    cout <<"Invalid credit card number: " <<endl;
}


for (int i = 1; i <= 8; i++)
{
    if (i%2 == 0)
    {
        sum_even = number.substr(i, 1);
    }
    else
    {
        for (int j = 1; i <= 8; i++)
        {
            if (j%2 == 1)
            {
                oddnum =  number.substr(j, 1);
            }
        }
    }
}

for (int i = 1; i <= 8; i++)
{
    oddnum_temp =  oddnum.substr(i, 8);

}

cout << oddnum_temp<<endl;
