#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.Factorial_Recursive(5) << std::endl;

    std::cout << solution.Factorial_Recursive(0) << std::endl;

    std::cout << solution.Factorial_Recursive(-1) << std::endl;

    return EXIT_SUCCESS;
}