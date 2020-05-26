#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string name = "";
    int totalName;
    std::cout << "How many names do you want to add? : ";
    std::cin >> totalName;

    std::ofstream file;

    for(int i = 0; i < totalName; i++){
        std::cout << "Enter your name: ";
        getline(std::cin, name);
        file.open("name.txt");
        file << name << std::endl;
    }
    file.close();

    return 0;
}
