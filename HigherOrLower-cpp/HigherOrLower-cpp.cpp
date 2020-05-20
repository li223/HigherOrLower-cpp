#include <iostream>
#include <ctime>
#include "ToLower.h"

int main()
{
    srand(time(NULL));
    int score = 0;
    while (true)
    {
        auto rannum = std::rand() % 100;
        auto nextnum = std::rand() % 100;
        std::cout << "Is the next number is higher or lower than " << rannum << ": ";
        std::string guess;
        std::cin >> guess;
        std::cout << std::endl;
        ToLower(guess);
        while (guess != "higher" && guess != "lower")
        {
            std::cout << "\nPlease enter 'higher' or 'lower': ";
            std::cin >> guess;
            ToLower(guess);
        }

        if (guess == "higher" && rannum < nextnum)
        {
            score++;
            std::cout << "Correct" << std::endl;
            break;
        }
        else if (guess == "lower" && rannum > nextnum)
        {
            score++;
            std::cout << "Correct" << std::endl;
            break;
        }
        else
        {
            std::cout << "Incorrect" << std::endl;
            score--;
            break;
        }
        
        std::cout << "Score: " << score << "\n\n";
    }
    return 0;
}
