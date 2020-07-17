// Problem
// Bubble Sort
// Input : {1, 3, 8, 2, 9, 2, 5, 6}
// Output : {1, 2, 2, 3, 5, 6, 8, 9}



#include<iostream>
#include<vector>
#include <math.h>
#include <bitset>


int main(){
    
    int a[8] = {1, 3, 8, 2, 9, 2, 5, 6};
    int length = sizeof(a)/sizeof(a[0]);
    std::cout<<length<<"\n";
    int t = 0;
    for (int i=0; i<length; i++){
        for(int j = i+1; j<length;j++){
        std::cout<<i<<" and  "<<j<<"\n";
            if(a[i]>a[j]){
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
         std::cout<<"Fin : "<<a[i]<<"\n";
        }
    }
    
    for (int i=0; i<length; i++){
        std::cout<<"Final : "<<a[i]<<"\t";
    }

    getchar();
    return 0;
}


