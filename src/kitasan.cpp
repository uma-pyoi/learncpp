#include <string>
#include <iostream>
#include <vector>
#include <map>
class Solution
{
public:
    int romanToInt(std::string s)
    {
        std::map<char, int> romanNums = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int resultInt{};
        for (size_t i = 0; i < s.length(); i++)
        {
            bool isIbeforeVX = (s.at(i) == 'I') && (s.at(i + 1) == 'V' || s.at(i + 1) == 'X');
            bool isXbeforeLC = (s.at(i) == 'X') && (s.at(i + 1) == 'L' || s.at(i + 1) == 'C');
            bool isCbeforeDM = (s.at(i) == 'C') && (s.at(i + 1) == 'd' || s.at(i + 1) == 'M');
            if (isIbeforeVX || isXbeforeLC || isCbeforeDM)
            {
                resultInt = romanNums[s.at(i + 1)] - romanNums[s.at(i)];
                if (i == (s.length() - 1))
                {
                    break;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                resultInt += romanNums[s.at(i)];
            }
        }
        return resultInt;
    }
};

int main()
{
    std::cout << std::boolalpha;
    Solution s;

    std::string romanString = "LVIII";
    int result = s.romanToInt(romanString);

    std::cout << "result: " << result << '\n';

    return 0;
}
