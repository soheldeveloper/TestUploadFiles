#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

struct Person
{
    std::string name;
    int age;
    std::string favoriteColor;
};

//Sort By Name
bool SortByName(const Person &p1, const Person &p2){ return p1.name < p2.name;}

//Sort By Age
bool SortByAge(const Person &p1, const Person &p2){ return p1.age < p2.age;}

//Sort By Favorite Color
bool SortByFavoriteColor(const Person &p1, const Person &p2){ return p1.favoriteColor < p2.favoriteColor;}

const unsigned numberOfPeople = 2;

int main()
{
    std::vector<Person> people(numberOfPeople);

    for (std::vector<Person>::size_type i = 0; i != numberOfPeople; ++i)
    {
        std::cout << "Person " << i+1 << " name : ";
        std::cin >> people[i].name;

        std::cout << "Person " << i+1 << " age : ";
        std::cin >> people[i].age;

        std::cout << "Person " << i+1 << " favorite color : ";
        std::cin >> people[i].favoriteColor;
    }

    //Sort by name
    sort(people.begin(), people.end(), SortByName);
    for(Person &p : people){
        std::cout << p.name << " ";
    }

    std::cout << std::endl;

    //Sort by age
    sort(people.begin(), people.end(), SortByAge);
    for(Person &p : people){
        std::cout << p.age << " ";
    }

    std::cout << std::endl;

    //Sort by favorite color
    sort(people.begin(), people.end(), SortByFavoriteColor);
    for(Person &p : people){
        std::cout << p.favoriteColor << " ";
    }
    
    return 0;
}
