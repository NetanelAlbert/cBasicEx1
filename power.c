#include "myMath.h"

#define EUL 2.71828182846
#define ONE 1

double Exp(int x){
    return Pow(EUL, x);
}

double Pow(double x, int y){
    double ans = ONE;
    while(y != 0){
        if(y < 0){
            ans /= x;
            y++;
        } else {
            ans *= x;
            y--;
        }
    }
    return ans;
}
