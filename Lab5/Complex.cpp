#include<iostream>

class Complex{
    public:
        Complex(double r, double i):
            real(r),imaginar(i){

            };
        
        Complex operator+ (Complex b){
            Complex sum(real+b.real, imaginar+b.imaginar);

            return sum;
        };

        Complex operator- (Complex b){
            Complex sub(real-b.real, imaginar-b.imaginar);

            return sub;
        }

        void show(){
            std::cout<<real<<"+"<<imaginar<<"i"<<std::endl;
        }
    private:
        double real;
        double imaginar;
};

int main()
{
    Complex a(1,2);
    Complex b(1,1);
    Complex x = a+b;
    Complex y = a-b;

    a.show();
    b.show();
    x.show();
    y.show();

    return 0;
}