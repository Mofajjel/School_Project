#include<iostream>
#include<random>
#include<cstdlib>
#include<ctime>
using namespace std;

int Q_NUM = 1; // Number of questions
int CORRECT = 0; // Correct answers
int WRONG = 0; // Wrong answers
bool ask[10]={true,true,true,true,true,true,true,true,true,true};

void display_random_questions(); // Shows random questions
void display(); // Shows question number, wrong answers and correct answers
void question(string question, string a, string b, string c, string d, char correct_answer);
void result(); // Shows the result
void opening(); // The opening of games

int main()
{
   opening();
  string username;
  cout << "\n Enter your name: \n";
  cin >> username;

  display();

  return 0;
}
void display()
{
    system("cls");
    cout<< " Question Number: " << Q_NUM << "\t\t Correct Answer:" << CORRECT << "\t\t Wrong Answer:" << WRONG << endl << endl;
    display_random_questions();
}
void display_random_questions()
{
 srand(time(0));
 bool is_question_remaining= false;
 for(int i=1; i<=10; i++)
 {
     if(ask[i])
     {
         is_question_remaining=true;
         break;
     }
 }
 while(is_question_remaining)
 {
     int num= rand()%10;
     if(ask[num])
     {
         ask[num]=false;
         switch(num)
         {
         case 1:
            question("1.Which language supports the Object Oriented Programming ?", "C language", "C++ language","Cobol language","Fortran language",'b');
            break;

         case 2:
            question("2.Which language is dynamically typed ?", "C language", "C++ language", "Python language", "Java language",'c');
            break;

         case 3:
            question("3.Which country is the largest country in UK ?","Scotland", "Wales","Northern Ireland", "England",'d');
            break;

         case 4:
            question("4. Which country is not the part of European Union ?","Russia", "Ireland", "Germany","Sweden",'a');
            break;

         case 5:
            question("5. How many stars are there in US flag?","52","50","48","45",'b');
            break;

         case 6:
            question("6. Which country has the longest border in the world?","Canada", "Russia", "Australia", "China",'a');
            break;

         case 7:
            question("7. What language does Brazilian speaks? ","English","French","Portuguese","Spanish",'c');
            break;

         case 8:
            question("8. Which programming language is widely used for machine learning and artificial intelligence?","Python","C#","C++","Java",'a');
            break;

         case 9:
            question("9. From which language the word rendezvous derived?","Spanish","Danish","Russian","French",'d');
            break;

         case 10:
            question("10. Which country won the most FIFA World Cup?","Brazil","Italy","Germany","Uruguay",'a');
            break;
         }

     }
 }
 result();
}
void result()
{
    system("cls");
    cout << "Total Questions = "<< Q_NUM-1 << endl;
    cout << "Correct Answers = "<< CORRECT << endl;
    cout << "Wrong Answers = "<< WRONG << endl;
    if(CORRECT>WRONG)
    {
        cout<< "Result= Pass \n";
    }
    else if(CORRECT<WRONG)
    {
        cout<< "Result = Fail \n";
    }
    else if(CORRECT == WRONG)
    {
        cout<< "Result = Tie \n";
    }
    else
    {
        cout<< " Result = Excellent \n";
    }

}
void question(string question, string a, string b, string c, string d, char correct_answer)
{
    cout << question <<endl;
    cout << "A.\t" <<a<<endl;
    cout << "B.\t" <<b<<endl;
    cout << "C.\t" <<c<<endl;
    cout << "D.\t" <<d<<endl;
    char answer;
    cin >> answer;
    if(answer== correct_answer)
    {
        CORRECT++;
    }
    else
    {
        WRONG++;
    }
    Q_NUM++;
    display();
}
void opening()
{
  cout << "\n\t\t       ************";
  cout << "\n\t\t       *          *";
  cout << "\n\t\t       *QUIZ GAME *";
  cout << "\n\t\t       *          *";
  cout << "\n\t\t       ************";
  cout << "\n\t\t********************************";
  cout << "\n\t\t*                             **";
  cout << "\n\t\t*  TEST YOUR SHARPNESS!!!!    **";
  cout << "\n\t\t*                             **";
  cout << "\n\t\t********************************";


}
