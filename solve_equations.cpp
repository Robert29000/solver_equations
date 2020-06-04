#include <solve_equations.hpp>
#include <math.h>

int solve_equation(int x, int degree){ // solve x^n + x^(n-1) + .. + x + 1
    int value = 1;
    for (int i = 1, i  <= degree; i++){
        value += std::pow(x, i);
    }
    return value;
}
