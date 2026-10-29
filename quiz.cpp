#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool question1()
{
    char answer;

    cout << "What is the capital of France? \n";
    cout << "a. Berlin \n";
    cout << "b. Paris \n";
    cout << "c. Rome \n";
    cout << "d. Madrid \n";

    cout << "Your answer ";
    cin >> answer;

    if (answer == 'b')
    {
        
        return true;
    }
    else
    {
        
        return false;
    }
}

bool question2()
{
    char answer;

    cout << "Which planet is known as the red planet? \n";
    cout << "a. Earth \n";
    cout << "b. Venus \n";
    cout << "c. Mars \n";
    cout << "d. Jupiter \n";

    cout << "Your answer ";
    cin >> answer;

    if (answer == 'c')
    {
       
        return true;
    }
    else
    {
        
        return false;
    }
}

bool question3()
{
    char answer;

    cout << "What is the capital of Germany? \n";
    cout << "a. Berlin \n";
    cout << "b. Paris \n";
    cout << "c. Rome \n";
    cout << "d. Madrid \n";

    cout << "Your answer ";
    cin >> answer;

    if (answer == 'a')
    {
       
        return true;
    }
    else
    {
       
        return false;
    }
}

bool question4()
{
    char answer;

    cout << "Where does the pope live? \n";
    cout << "a. Berlin \n";
    cout << "b. Paris \n";
    cout << "c. Rome \n";
    cout << "d. Madrid \n";

    cout << "Your answer ";
    cin >> answer;

    if (answer == 'c')
    {
        
        return true;
    }
    else
    {
        
        return false;
    }
}

bool question5()
{
    char answer;

    cout << "Which planet supports life? \n";
    cout << "a. Earth \n";
    cout << "b. Venus \n";
    cout << "c. Mars \n";
    cout << "d. Jupiter \n";

    cout << "Your answer ";
    cin >> answer;

    if (answer == 'a')
    {
        
        return true;
    }
    else
    {
        
        return false;
    }
}

void quiz()
{
    int score = 0;

    bool (*questions[])() = {
        question1, question2, question3, question4, question5
    };
    
    // Using the Fisher Yates Shuffle Algorithm 
    int questionOrder[] = {0, 1, 2, 3, 4};
    srand(time(0));

    for(int i = 4; i > 0; i--)
    {
        int j = rand() % (i + 1);

        int temp = questionOrder[i];
        questionOrder[i] = questionOrder[j];
        questionOrder[j] = temp;
    }

    cout << "Welcom to the General Knowledge Quiz! \n";
    cout << "You will be asked 5 questions. \n";
    cout << "Enter the letter corresponding to your answers (a, b, c, or d). \n";

    for (int i = 0; i < 5; i++)
    {
        if (questions[questionOrder[i]]())
        {
            cout << "Correct answer! \n";
            cout << " \n";
            score++;
        }
        else
        {
            cout << "Incorrect answer! \n";
            cout << " \n";
        }
    }

    cout << "Your total score is: " << score << endl;
    cout << " \n";
    cout <<  "GAME OVER! \n";
}


int main()
{
    cout << " \n";

    string response = "yes";

   
    while (response == "yes")
    {
        quiz();

        cout << "Do you want to continue playing? (Answer 'yes' or 'no') ";
        cin >> response;
        cout << " \n";

    }

}