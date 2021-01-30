#include <iostream>
#include <vector>

class Animal
{
public:
    Animal() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
    virtual ~Animal() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    virtual void eat() = 0;
    void talk() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
};

class Cat : public Animal
{
public:
    Cat() { std::cout << __PRETTY_FUNCTION__ << std::endl;}

    virtual ~Cat() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    void eat() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
    void murmur() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    void talk() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    bool isCat() { return true; }
};

class Dog : public Animal
{
public:
    Dog() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
    virtual ~Dog() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    void eat() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
    void bark() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    void talk() {std::cout << __PRETTY_FUNCTION__ << std::endl;}

    bool isCat() { return false; }
};

int main(int argc, char const *argv[])
{
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    std::vector<Animal*> zoo;
    zoo.push_back(cat);
    zoo.push_back(dog);

    for (Animal* animal : zoo)
    {
        animal->eat();

        Cat* cat = dynamic_cast<Cat*>(animal);
        if (cat != nullptr)
        {
            cat->murmur();

            Animal* tmp = static_cast<Animal*>(cat);
            tmp->talk();
        }

        Dog* dog = dynamic_cast<Dog*>(animal);
        if (dog != nullptr)
        {
            dog->bark();
        }
    }

    delete cat;
    delete dog;

    // Animal* kit = new Kitten();
    // kit->eat();
    // delete kit;

    return 0; 
}
