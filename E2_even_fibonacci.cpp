// Problem
//Even Fibonacci numbers

#include<iostream>
#include<vector>
#include <math.h>
#include <bitset>


int main(){
    
    int terms = 10;
    long long int f1 = 0;
    long long int f2 = 1;
    long long int result = 0;
    long long int sum = 0;
    
    while(sum < 4000000){
        result = f1 + f2;
        f1 = f2;
        f2 = result;
        if(result % 2 == 0){
            std::cout<<"result : "<< sum<<"\n";
            sum = sum + result;
        }
        
    }
    
    std::cout<<"Even Sum : "<< sum<<"\n";
    getchar();
    return 0;
}


