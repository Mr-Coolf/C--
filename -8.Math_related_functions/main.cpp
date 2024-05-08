#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double x = 3;
    double y = 2.3;
    double max;
    double min;
    double power;
    double squareRoot;
    double absolute;
    double rounded;
    double ceiled; //round up
    double floored; // round down 

    max = std::max(x,y);
    min = std::min(x,y);
    power = pow(x, y);
    squareRoot = sqrt(x);
    absolute = abs(-x);
    rounded = round(y);
    ceiled = ceil(y);
    floored = floor(y);

    return 0;
}
