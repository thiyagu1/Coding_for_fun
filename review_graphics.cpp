// Adding two numbers

#include<iostream>
#include <filesystem>
#include <unordered_map>
#include <vector>
#include <regex>
#include <iterator>
#include <memory>
#include <thread>

namespace fs = std::filesystem;


const void display( const int x)
       {
           std::cout<<"const fn :"<< x<<std::endl;
        }



template <typename T>
void print_vector(std::vector<T>myvector) {
    typename std::vector<T>::iterator it;
std::cout << "myvector contains:";
for (it = myvector.begin(); it < myvector.end(); it++)
    std::cout << " " << *it << std::endl;
std::cout << std::endl;
}

void task1(std::string msg)
{
    std::cout << "task1 says: " << msg;
}

int main()
{
    const std::string& path = "/Users/thiyaga/Downloads/SXR_Code_Samples/";
    auto file_status = fs::status(path);
    if (false == std::filesystem::is_directory(file_status))
        std::cout<<"Is Directory : false"<<std::endl;
    else
        std::cout<<"Is Directory : True"<<std::endl;

    
    // Unordered map
    std::unordered_map<std::string, int> umap;
    umap["Thiyaga"] = 100;
    umap["Janu"] = 200;
    umap["Jatee"] = 30;
    
    auto found = umap.find("Janu");
    
    if ( found == umap.end() )
      std::cout << "not found";
    else
      std::cout << found->first << " is " << found->second  << std::endl;
    
    //for (auto x : umap){
    //std::cout<<x.first << " " << x.second  << std::endl;
    //}
    int n1 = 30;
    int n2 = 20;
    int max = (n1 > n2) ? n1+5, n1 * 0 : n2;
    std::cout<<"Max : "<<max<<std::endl;
    
    std::vector<int> m_asset_s;
    m_asset_s.push_back(10);
    m_asset_s.push_back(20);
    m_asset_s.push_back(30);
    m_asset_s.push_back(40);
    m_asset_s.push_back(50);
    
    auto asset_handle = (found == umap.end()) ?  (m_asset_s.size() - 1) : found->second;
    std::cout<<"asset_handle : "<<asset_handle<<std::endl;
    
    
    // Reg expression
    auto obj_regex = std::regex(".*\\.cpp");
    std::vector<std::string> obj_files;
    for (const auto& file : std::filesystem::directory_iterator(path)) {
        auto strpath = file.path().string();
        if (std::regex_match(strpath, obj_regex)) obj_files.push_back(strpath);
    }
    print_vector(obj_files);
    std::sort(obj_files.begin(), obj_files.end(), std::greater<std::string>());
    //std::sort(obj_files.begin(), obj_files.end());
    print_vector(obj_files);
    
    for (auto& file : obj_files) {
        std::make_shared<std::string>(file);
        std::cout<<"New Files: "<< file<<std::endl;
        
    }
    
    std::thread t1(task1, "Hello");
    t1.join();
    
    std::vector<std::thread> workers;
    for (int i = 0; i < 5; i++) {
        workers.push_back(std::thread([i]() {
        std::cout << "thread function " << i << "\n";
        }));
    }
    
    
    
    
   

    const int f = 0;
        //d1.showMessage();Error occurred if uncomment.
    for(int k = 0; k < 10; k++){
        display(f);
    }
    
    float m_total = 0.0f;
    const float total = m_total == 0.0f ? 10 : 5;
    std::cout<<"Total :"<< total<< std::endl;
    
    
    static const float fractions[] = { 1 / 60.0f, 1 / 30.0f, 1 / 15.0f, 1 / 10.0f, 1 / 5.0f, 1 / 2.0f, 1, 2, 5, 10, 15, 30, 60, 300 ,600, 1000, 2000, 3600, 5000 };
    
    auto tickSize = std::lower_bound(std::begin(fractions), std::end(fractions), 10);
    
    std::cout<<"Ticksize :"<< *tickSize<< std::endl;
    
    
    int length = 10 % 5 ? 10 : 15;
    std::cout<<"Length :"<< length<< std::endl;
    
    
    getchar();
}
