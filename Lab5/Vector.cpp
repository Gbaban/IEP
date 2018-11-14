#include<iostream>

const int SIZE = 5;

class Vector{

    public:
        Vector(){
            for(int i=0;i<SIZE;i++)
            {
                a[i] = i;
            }
        };

        int operator[](int index){
            if (index < 0 || index >= SIZE)
            {
                throw "Index out of bounds!";
            }

            return a[index];
        }

    private:
        int a[SIZE];
};

int main(){

    Vector v;

    try{
        std::cout<<v[1]<<std::endl;
        std::cout<<v[-1]<<std::endl;
    }
    catch (const char* msg)
    {
        std::cout<<msg<<std::endl;
    }

}
