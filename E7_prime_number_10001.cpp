// Problem
//10001st prime number

#include<iostream>
#include<vector>
#include <cmath>
#include <bitset>
#include <iterator>
#include <time.h>
#include <math.h>
#define log(x) std::cout << #x"=" << x << std::endl

int check_prime(int n){
    int nn = 0;
    int sqt = sqrt(n);
    int result = 0;
    int num = n;
    int f = 0;
    int divisible = 0;
    //log(sqt);
 
    for(int i = 2; i <=sqt; i++){
        //log(i);
        if(n % i != 0){
            f=0;
            if(f == 0 && i == sqt){
                num = n;
            }
        }
        else{
            f++;
            divisible = i;
            break;
        }
            
    }
    if (f == 0 ){
        //std::cout<< num <<" Is a prime"<<"\n";
        nn = num;
    }
    return nn;
    //else{
    //    std::cout<< n <<" is not a prime as it is divisible by "<< divisible<<"\n";
    //}
    
}

int main()
{
    //int n = 13;
    //check_prime(n);
    int find = 10001;
    int n = 2;
    int res = 0;
    std::vector<int>data;
    while(data.size()<find){
        int data1  = check_prime(n);
        if (data1 != 0){
        data.push_back(data1);
        }
        n++;
    }
    
    for (auto& i: data){
    //std::cout << i << ' ';
        res = i;
    }
    log(res);
    getchar();
    return 0;
}

