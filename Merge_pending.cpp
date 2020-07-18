// Problem
// Merge Sort General Idea

#include<iostream>
#include<vector>
#include <math.h>
#include <bitset>


void print_arr(int arr[], int l){
    for(int k = 0; k<l; k++){
        std::cout<<"array ["<<k <<"] = "<<arr[k]<<"\n";
    }
}

void merge_sort(int a[], int l){
    
}

void merge (int a[], int l){
    
        int left = 0;
        int right = l;
        int mid = (right + left)/2;
        int size_1 = mid;
        int size_2 = 0;
    
        if(l%2 == 0){
            size_2 = mid;
        }
        else
            size_2 = mid + 1;
   
                std::cout<<"Size of split array :"<< size_1 <<","<< size_2 << "\n";
                int new_left[size_1];
                int new_right[size_2];
                std::cout<<"Res :"<< left <<","<< right <<","<< mid << "\n";
                for(int i = left; i <size_1; i++){
                    new_left[i] = a[i];
                }
                for(int i = left; i <size_2; i++){
                    new_right[i] = a[mid + i];
                }
                print_arr(new_left, size_1);
                print_arr(new_right, size_2);
                if(mid != 0){
                    merge(new_left, size_1);
                    merge(new_right, size_2);
                    
                }
}

int main(){
    
    int a[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int l = sizeof(a)/sizeof(a[0]);
    std::cout<<"l:"<<l<<"\n";
    merge(a, l);
    getchar();
    return 0;
}


