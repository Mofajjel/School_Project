#include<iostream>
using namespace std;
float addition(float x, float y)
{
    return (x+y);
}
float subtraction(float x, float y)
{
    return (x-y);
}
float multiplication(float x, float y)
{
    return (x*y);
}
float divide(float x, float y)
{
    return (x/y);
}
int module(int x, int y)
{
    return (x%y);
}
int main()
{
    int choice;
    float x,y;
    cout << "Menu\n";
    cout << " 1. Addition\n" << " 2. Subtraction\n" << " 3. Multiplication\n" << " 4. Divide\n" << " 5. Module\n";
    cin >> choice;
    switch(choice)
    {
    case 1:
        {
            cout << " Enter two numbers \n";
            cin >> x >> y;
            cout << " Sum is " << addition(x,y);
            break;
        }
    case 2:
        {
            cout << " Enter two numbers \n";
            cin >> x >> y;
            cout << " Subtraction is " << subtraction(x,y);
            break;
        }
    case 3:
        {
            cout << " Enter two numbers \n";
            cin >> x >> y;
            cout << " Multiplication is " << multiplication(x,y);
            break;
        }
    case 4:
        {
            cout << " Enter two numbers \n";
            cin >> x >> y;
            cout << " Division is "<< divide(x,y);
            break;
        }
    case 5:
        {
            int x,y;
            cout << " Enter two numbers \n";
            cin >> x >> y;
            cout << " Modulus is " << module(x,y);
            break;
        }
    default:
        {
            cout << " ERROR ";
            break;
        }


    }
    return 0;
}
