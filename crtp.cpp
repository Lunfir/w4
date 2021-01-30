#include <iostream>
#include <vector>

// CRTP

template <typename T>
class Base
{
public:
    void func()
    {
        static_cast<T*>(this)->func();
    }
};

class Foo : public Base<Foo>
{
public:
    void func() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
};

class Bar : public Base<Bar>
{
public:
    void func() {std::cout << __PRETTY_FUNCTION__ << std::endl;}
};

template <typename U>
void init(Base<U>* base)
{
    std::vector<Base<U>*> vec;
    vec.push_back(base);

    for (Base<U>* i : vec)
    {
        i->func();
    }

}

int main(int argc, char const *argv[])
{
    Base<Foo>* foo = new Foo();
    Base<Bar>* bar = new Bar();

    init(foo);
    init(bar);

    delete foo;
    delete bar;

    return 0;
}