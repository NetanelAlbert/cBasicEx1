#include <stdio.h>
#include "myMath.h"

#define F1(x) sub(add(Exp((int)x), Pow(x, 3)), 2)
#define F2(x) add(mul(x, 3), mul(Pow(x, 2), 2))
#define F3(x) sub(div(mul(Pow(x, 3), 4), 5), mul(x, 2))

int main(){
    printf("Welcome to my first c program, today we'll calculate some math fanctions according to a number you'll insert. \nplease enter a real number x:\n");
    double num;
    scanf("%lf", &num);
    double ans;
    ans = F1(num);
    printf("first function - f(x) = e^x + x^3 - 2 , f(%.4f) = %.4f\n", num, ans);

    ans = F2(num);
    printf("second function - f(x) = 3x + 2x^2 , f(%.4f) = %0.4f\n", num, ans);

    ans = F3(num);
    printf("third function - f(x) = (4x^3)/5 - 2x , f(%.4f) = %.4f\n", num, ans);

    return 0;
}
