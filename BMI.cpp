#include<iostream>

using namespace std;

int main()
{
    cout << "******** BMI Calculator ********* \n Instructions:\n Weight(Kg)/ Height(m)*Height(m) \n Underweight < 18.5 \n Normal Weight = 18.5 to 24.9 \n Overweight > 25\n *********************************\n";
    float weight,height,bmi;
    cout << "Weight(kg), Height(m): ";
    cin >> weight >> height;
    bmi = weight/(height*height);
    if(bmi<18.5)
    {
        cout << bmi << " Underweight\n";
    }
    else if(bmi>25)
    {
        cout << bmi << " Overweight\n";
    }
    else
    {
        cout << bmi <<" Perfect \n";
    }
    return 0;
}
