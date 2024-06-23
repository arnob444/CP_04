#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));

    int number = std::rand() % 100 + 1;
    int guess;

    std::cout << "Guess the number between 1 and 100." << std::endl;

    do
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the number." << std::endl;
        }
    } while (guess != number);

    return 0;
}
