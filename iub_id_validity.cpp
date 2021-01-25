#include<iostream>
#include<string>
using namespace std;
void CheckValidity(string str)
{
    bool isValid = true;
    if (str.size()!=4)
    {
        isValid = false;
    }

    for(int i=0; i<str.size(); i++)
    {
        if( (int)str[i]<48 || (int)str[i]>57 )
        {
            isValid=false;
        }
        if(isValid == false)
        {
            cout << " Not Valid "<<endl;
        }
        else
        {
            cout << " Valid " <<endl;
        }
    }
}
int main()
{
    string str;
    cout << " Enter your id: ";
    cin >> str;
    CheckValidity(str);
    return 0;
}
