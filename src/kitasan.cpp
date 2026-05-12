#include <string>
#include <iostream>
#include <vector>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::vector<bool> isPalindromeVector;

        std::string stringX = std::to_string(x);
        std::cout << "stringX: " << stringX << '\n';

        int leftCharIndex = 0;
        int middleIndex = stringX.length() / 2;
        while (leftCharIndex < middleIndex)
        {
            char leftChar = stringX.at(leftCharIndex);
            int rightCharIndex = stringX.length() - leftCharIndex - 1;
            char rightChar = stringX.at(rightCharIndex);
            std::cout << "left: " << leftChar << " | right: " << rightChar;

            bool areDifferent = leftChar != rightChar;
            std::cout << " | different?: " << areDifferent << '\n';

            if (areDifferent)
            {
                return false;
            }
            leftCharIndex++;
        }

        return true;
    }
};

int main()
{
    std::cout << std::boolalpha;
    Solution s;
    int testInt = -121;
    bool isP = s.isPalindrome(testInt);
    std::cout << "is palindrome: " << isP << '\n';

    return 0;
}
