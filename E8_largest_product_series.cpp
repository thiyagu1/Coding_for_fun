// Problem
//Largest Product In A Series

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


void printMap(std::map<long int, long int> sampleMap)
{
    std::map<long int, long int>::iterator itr;
    for (itr = sampleMap.begin();
         itr != sampleMap.end();
         ++itr) {
        std::cout << " F : "<<itr->first
             << " S : " << itr->second << "\n";
    }
    std::cout << std::endl;
}

long int element_multiply(long int x){
    
    long int mul = 1;
    long int x_div = 1000;
    while(x_div != 0){
    //log(x);
    long int x_rem = x % 10;
    mul = mul * x_rem;
    x_div = x/10;
    //log(mul);
    x = x_div;
    }
    return mul;
}

int main()
{
    std::string number =
        "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776 657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    
    std::cout<< number<<"\n";
    std::map<long int, long int> data;
    long int x = 0, io = 0, io2 = 0;
    int kl = 4;
    for(int i = 0; i<=number.length();i=i+kl){
        //log(j);
        //log(i);
        std::string f4= number.substr(i, kl);
        std::stringstream f_int(f4); // Convert from strings to int
        f_int>>x;                    // Convert from strings to int
        //std::cout<<"x :"<< x << "\n";
        log(x);
        long int xs = element_multiply(x);
        log(xs);
        //log(xs);
        //data.insert(std::pair<long int, long int>(x,xs));
        if(xs > io){
            io = xs;
            io2 = x;
            
        }
    }
    
    //printMap(data);
    /*
    auto xx = std::max_element(data.begin(), data.end(),
    [](const std::pair<long int, long int>& p1, const std::pair< long int, long int>& p2) {
        return p1.second < p2.second; });
    
    std::cout<<"xx : "<<xx->first<<","<<xx->second;
    */
    log(io);
    log(io2);
     getchar();
    return 0;
}

