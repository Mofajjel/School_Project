#include<iostream>
using namespace std;
char grade(int subject)
{
    int i,marks,sum=0;
    float avg=0;
    char cg;


    for(i=1; i<=subject; i++)
    {
        cout << "Enter your marks\n";
        cin >> marks;
        sum = sum + marks;



    }
     avg = float(sum)/subject;
            cout << " Average " << avg << "\n";
    if(avg>=90)
        {
            cg = 'A';
            //cout << " A grade"<<endl;
        }
        else if (avg>=80)
        {
            cg = 'B';
            //cout << " B grade" <<endl;
        }
        return cg;


}
int main()
{
    int subject; char cg;
    cout << " Enter your subject \n";
    cin >> subject;
    cg = grade(subject);
    cout << cg<<" grade" <<endl;
    return 0;
}
