// Problem
//Special Pythagorean triplet

#include<iostream>
#include<vector>
#include <cmath>
#include <bitset>
#include <iterator>
#include <time.h>
#include <math.h>
#include <sstream>
#include <map>
#define log(x) std::cout << #x"=" << x << std::endl

float check_p_triplet(int a, int b){
    std::vector<float> final;
    float product = 1;
    float c = 0;
    float D = 0.0;
    c = std::pow(a, 2) + std::pow(b, 2);
    float sqt= sqrt(c);
    float m = std::fmod(sqt, 1.0);
    if(m == 0){
        //std::cout<<"Its a P_Triplet" << "\n";
        D = a + b + sqt;
        if(D == 1000){
            final.push_back(a);
            final.push_back(b);
            final.push_back(sqt);
            final.push_back(D);
            //std::cout<<"a , b , c , d : "<<a<<" , "<<b<<" , "<<sqt<<" , "<< D<<"\n";
            product = a * b * sqt;
        }
    }
    
    return product;
    
}


int main()
{
    
    //int a, b, c;
    std::vector<int> Final;
    //a = 3; b = 4; c=0;
    for(int i = 1; i <= 1000; i++ ){
        for(int j = 1; j <= 1000; j++){
           float pdt = check_p_triplet(i, j);
            if(pdt>1)
                Final.push_back(pdt);
        }
    }
    sort( Final.begin(), Final.end() );
    Final.erase( unique( Final.begin(), Final.end() ), Final.end() );
    for(auto& i:Final){
        std::cout<< " End Result : "<< i<<"\n";
    }
    
    /*
    // To print Vector of Vectors
    for (int i = 0; i < Final.size(); i++)
    {
        for (int j = 0; j < Final[i].size(); j++)
        {
            std::cout << Final[i][j]<<"\n";
        }
    }
     */
    getchar();
    return 0;
}

