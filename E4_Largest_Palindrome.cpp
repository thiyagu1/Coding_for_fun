// Problem
//Largest palindrome product

#include<iostream>
#include<vector>
#include <cmath>
#include <bitset>
#include <iterator>
#include <time.h>
#include <math.h>
#define log(x) std::cout << #x"=" << x << std::endl

bool check_palindrome(int n){
    
    std::vector<int> x, y;
    while(n != 0){
    int k = n % 10;
    n = n / 10;
    x.push_back(k);
    //log(k);
    //log(n);
    }
    int size = x.size();
    y = x;
    std::reverse(x.begin(), x.end());
    
    if(y == x){
        //log("Its a palindrome");
        return 1;
    }
    else{
        //log("Not a palindrome");
        return 0;
    }
        
        
    //for (auto i: x)
    //std::cout << i << ' ';
    
    //return 1;
    
}

struct data{
    std::vector<int>X;
    std::vector<int>Y;
    std::vector<int>Res;
};

int main()
{
    //int n = 906609;
   
    //int x = 999;
    int m = 0;
    data p_data;
    int Final = 0;
    int Final_x = 0;
    int Final_y = 0;
    std::vector<data> Palindrome;
    int mx = 0;
    for(int x = 999; x >= 100; x--){
        for(int y = 999; y>=100; y--){
        if(m == 0){
        int result = x * y;
        bool p = check_palindrome(result);
        if (p == 1){
            
            if(mx<result){
                mx = result;
                
                p_data.X.push_back(x);
                p_data.Y.push_back(y);
                p_data.Res.push_back(result);
                Palindrome.push_back(p_data);
                Final = mx;
                Final_x = x;
                Final_y = y;
                //std::cout<<"Largest Palindrome is :" << result <<"\n";
                //std::cout<<"Multiples of :" << x <<"x"<<y <<"\n";
                }
            
            }
        }
     }
}
    //check_palindrome(n);
    log(Final);
    log(Final_x);
    log(Final_y);
    getchar();
    return 0;
}

