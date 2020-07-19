// Problem
//Even Smallest multiple divisible from 1 to 20

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
    int k = 1;
    int f = 0;
    int res = 0;
    while(k>0 && f==0){
        for(int i = 1; i <=20; i=i+1){
            if(k % i == 0){
                //std::cout<<"k : "<<k<<"\t "<<"i : "<<i<<"\n";
                if(i == 20 && f == 0){
                    res = k;
                    f++;
                }
                // log(k);
            }
            else
                break;
        }
        k++;
    }
    log(res);
    getchar();
    return 0;
}

