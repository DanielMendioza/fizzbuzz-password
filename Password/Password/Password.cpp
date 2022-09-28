// Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

std::string passwordChecker(std::string t_pw);
void otherMain();

int main()
{
    _ASSERTE(passwordChecker("123pndjos"));//not completely working...
    otherMain();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

std::string passwordChecker(std::string t_pw)
{
    std::string errorChecker;
    if (sizeof(t_pw) > 8)
    {
        errorChecker += "Error, Password must be at least 8 characters";
    }

    int numberCount = 0;

    for (size_t i = 0; i < sizeof(t_pw); i++)
    {
        if (t_pw[i] > '48' && t_pw[i] < '57')
        {
            numberCount += 1;
        }
    }
    if (numberCount < 2)
    {
        errorChecker += "The password must contain at least 2 numbers";
    }

    return errorChecker;
}

void otherMain()
{
    std::string password;
    std::cout << "Please enter your password\n";
    std::cin >> password;
    passwordChecker(password);
    //The password must contain at least 2 numbers
    //Password must be at least 8 characters
}
