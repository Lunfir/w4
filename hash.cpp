#include <iostream>
#include <functional>
#include <vector>
#include <unordered_map>

class Employee
{
public:
    Employee(const std::string& firstName, const std::string& lastName)
    {
        this->firstName = firstName;
        this->lastName = lastName;
    }

    std::string firstName;
    std::string lastName;
};

bool operator==(const Employee& current, const Employee& other)
{
    return current.firstName.compare(other.firstName) == 0 &&
           current.lastName.compare(other.lastName) == 0;
}

namespace std
{
    template<> struct hash<Employee>
    {
        std::size_t operator()(Employee const& s) const noexcept
        {
            std::size_t h1 = std::hash<std::string>{}(s.firstName);
            std::size_t h2 = std::hash<std::string>{}(s.lastName);
            return h1 ^ (h2 << 1);
        }
    };
}

int main()
{
    std::unordered_map<Employee, float> map = {
        { Employee("John", "Doe"), 34.53f},
        { Employee("Mary", "Sue"), 45.67f}
    };

    float s = map.find(Employee("Mary", "Sue"))->second;
    std::cout << "salary: " << s;

    return 0;
}
