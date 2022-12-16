#include <bits/stdc++.h>
using namespace std;

// copy constructor..
class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y)  
    {
        a = x;
        b = y;
    }
    Complex(Complex &c){ 
        // we have to pass by reference as If we don't then it will create object and call contructor recursivily
        // when the data type is of class itself then it should be copy constructor.
        a=c.a;
        b=c.b;
    }
    void show_data(){
        cout<<a<<" "<<b<<"\n";
    }

};

int main()
{
    Complex c1(3,5); // (passing values in constructor)
    Complex c2(c1);  // passing object c1 in c2 (copy constructor)
    c2.show_data();  



}
