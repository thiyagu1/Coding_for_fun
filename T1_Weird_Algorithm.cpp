// Problem
/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n = 3 is as follows:
 
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1

 Your task is to simulate the execution of the algorithm for a given value of n.*/



#include<iostream>
#include<vector>
#include <math.h>

std::vector<int> my_Weird_Algorithm(int x){
    std::vector<int> P;
    //std::cout<<"x : " << x<<std::endl;
    P.push_back(x);
    while(x != 1){
        if(x == 1) break;
        if(x%2 == 0){
            x = x/2;
        }
        else {
            x = (x * 3) + 1;
        }
        std::cout<<"x : " << x<<std::endl;
        P.push_back(x);
    }
    return P;
}


int main()
{
    std::vector<int> list;
    int number = 1;
    if(number>=1 && number <= pow(10,6)){
    list = my_Weird_Algorithm(number);
    }
    else{
        std::cout<< "Please enter a value >= 1 and <= 10 pow 6"<<std::endl;
    }
    for (auto i: list){
      std::cout << i << ' ';
      //list.push_back(i);
    }
    getchar();
}

// use long long int instead of int to pass n = 138367
