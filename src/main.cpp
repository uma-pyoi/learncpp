#include "io.h"

int main()
{
    int numOne{readNumber()};
    int numTwo{readNumber()};
    writeAnswer(numOne + numTwo);
    return 0;
}
