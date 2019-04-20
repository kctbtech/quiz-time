//Quiz Engine by kctbtech Github

#include <iostream>

int score, answered, maxQuestions;

void dataFeed()
{
    maxQuestions = 3; //Input how many questions are in your quiz here
    // Any new features that require new data must be declared as a global variable. These global variables can be given a number or string value here depending on what kind of variable they are.
}

void askQuestion(std::string question, std::string answer, int reset){
    std::string input;
    std::cout << question << std::endl;
    std::cin >> input;
    if (reset == 1)
    {
        score = 0;
        answered = 0;
    }
    answered += 1;
    if (input == answer)
    {
        std::cout << "You got the correct answer." << std::endl;
        score+= 1;
    }
    
    else
    {
        std::cout << "You got the wrong answer." << std::endl;
    }
    if (answered == maxQuestions)
    {
        std::cout << "You're final score is: " << score << " out of " << maxQuestions << " questions." << std::endl;
    }
    else
    {
        std::cout << "You're current score is: " << score << " out of " << answered << " answered questions." << std::endl;
    }
    
    
}

int main()
{
    int score;
    score = 0;
    std::cout << "Programmed using @kctbtech's Quiz Engine." << std::endl;
    dataFeed();
    askQuestion("What colour is an apple? A) Red B) Yellow C) Orange","A", 1);
    askQuestion("What colour is a banana? A) Red B) Yellow C) Orange", "B", 0); // The first question must have a 1 put at the end of it to reset the score. After this, it is not required so you must a 0 at the end instead.
    askQuestion("What colour is an orange? A) Red B) Yellow C) Orange", "C", 0);
    
}
