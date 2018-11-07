
//#include<string>
#include<iostream>

class Foo{
    public:
    Foo(const std::string& name);
    ~Foo();
    void printName();

    private:
    std::string name;
    Foo(const Foo&);
    Foo& operator=(const Foo&);
};

Foo::Foo(const std::string& name)
    :name(name)
    {};

void Foo::printName()
{
    std::cout<<Foo::name<<"\n";
};

Foo::~Foo(){
};


Foo& staticFoo()
{
    static Foo f("Ionel");
    return f;
}

int main()
{

    Foo f("Vasile");

    f.printName();

    staticFoo().printName();

    return 0;
}
