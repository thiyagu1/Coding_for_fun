// Problem
//Sum of Square Differences

#include<iostream>
#include<vector>
#include <cmath>
#include <bitset>
#include <iterator>
#include <time.h>
#include <math.h>
#define log(x) std::cout << #x"=" << x << std::endl


int main()
{
    int limit = 100;
    int sum_of_squares = 0;
    int square_of_sum = 0;
    for(int i = 1; i <=limit; i++){
        sum_of_squares = sum_of_squares + ( i * i );
        square_of_sum = square_of_sum + i;
    }
    int finalt = (square_of_sum * square_of_sum)  - sum_of_squares;
    log(finalt);
    getchar();
    return 0;
}

