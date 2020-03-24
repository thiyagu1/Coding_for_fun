/*
Implement the unique_names method. When passed two vectors of names, it will return a vector containing the names that appear in either or both vectors. The returned vector should have no duplicates.

For example, calling unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"}) should return a vector containing Ava, Emma, Olivia, and Sophia in any order.


*/

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
std::vector<T> remove_duplicates(std::vector<T>& vec)
{
  std::sort(vec.begin(), vec.end());
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  return vec;
}

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    /*if (std::find(names1.begin(), names1.end(), "abc") != v.end())
    #{
      // Element in vector.
    }*/
    std::vector<std::string> N1,N2;
    for (auto i: names1){
      std::cout << i << ' ';
      N1.push_back(i);
    }
    std::cout<<endl;
    for (auto i: names2){
      std::cout << i << ' ';
      N1.push_back(i);
    }
     std::cout<<endl;
    //names1.insert(names1.end(), names2.begin(), names2.end());
    std::move(N2.begin(), N2.end(), std::back_inserter(N1));
    N1 = remove_duplicates(N1);
    return N1;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
