// Problem
//Count total set bits in all numbers from 1 to n

#include<iostream>
#include<vector>
#include <math.h>
#include <bitset>

int setbits(int n){
    //std::bitset<4> p
    int d = 15;
    std::bitset<4> q(d);
    int count = 0;
    for (int i = 0; i <= n ; i++){
        std::bitset<4> p(i);
        std::cout<<"r : "<< i <<"\t"<< p<<"\n";
        std::cout<<"r : "<< d <<"\t"<< q<<"\n";
        std::bitset<4> c = p & q;
        std::cout<<"---------------------------";
        std::cout<<"c : "<< c<<"\n";
        //std::cout<<"c[0] : "<< c[0]<<"\n";
        //std::cout<<"c[1] : "<< c[1]<<"\n";
        //std::cout<<"c[2] : "<< c[2]<<"\n";
        //std::cout<<"c[3] : "<< c[3]<<"\n";
        while(c != 0){
            std::cout<<"c : "<< c<<"\n";
            if ( c[3] == 1)
                count = count + 1;
            c = c << 1;
        }
        std::cout<<"count : "<< count<<"\n";
        
    }
    return count;
}


int main()
{

    
    int a = 1; //0 000 0000 0000 0101
    int b = 2; //0 000 0000 0000 1001
    int c = 0;
    c = a & b; // bit wise and
    //c = a | b; // bit wise or
    //c = a ^ b; // bit wise xor
    //c = ~c;    // bit wise complimentry
    //c = c << 2; // bit wise Left shift
    //c = a >> b; // bit wise Right shift
    std::cout<<"a : "<< a <<"\t" <<"b : "<< b <<"\n";
    std::bitset<32> p(a);
    std::bitset<32> q(b);
    std::bitset<32> r(c);
    
    std::cout<<"p : "<< p <<"\n" ;
    std::cout<<"q : "<< q <<"\n" ;
    std::cout<<"r : "<< r <<"\n" ;
    
    int count = setbits(3);
    std::cout<<"Final Count : "<<count<<"\n";
    getchar();
}


