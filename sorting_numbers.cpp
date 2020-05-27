#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> intVec = {6,7,9,60,50,3,23};

    std::cout << "Before sorting: ";
    for ( std::vector<int>::size_type i = 0; i < intVec.size(); i++)
    {
        std::cout << intVec[i] << " ";
    }
    std::cout << std::endl;
    
    sort(intVec.begin(),intVec.end());

    std::cout << "After sorting: ";
    for (std::vector<int>::size_type i = 0; i < intVec.size(); i++)
    {
        std::cout << intVec[i] << " ";
    }
    
    return 0;
}