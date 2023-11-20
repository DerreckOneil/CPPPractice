// CPPPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996);

class CPPPractice
{
    public:
    bool doPalindrome(string someString)
    {
        const int x = someString.length();
        char* chars = new char[x + 1]; // +1 for the null terminator

        strncpy_s(chars, x + 1, someString.c_str(), x);

        chars[x] = '\0'; //Ensure null termination

        for (int i = 0; i < x / 2; i++)
        {
            if (chars[i] == chars[x - 1 - i])
            {
                continue;
            } else
            {
                delete[] chars;
                return false;
            }
        }
        delete[]chars;
        return true;
    }
};
int main()
{
    cout << "Hello World!\n";
    CPPPractice program;
    string str = "abczba";
    bool isPalindrome = program.doPalindrome(str);
    if (isPalindrome)
        cout << "This string is a Palindrome!";
    else
        cout << "This string is not a Palindrome!";
    return 0;
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
