#include <bits/stdc++.h>
using namespace std;

// Add two complex number using fuction not operator overloading
// the function should be member fuction(present inside class)
// as the data member which function is going to use is present inside class.
class Complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)  // we can write this function outside of this class also but we have to decleare it here.
    {
        a = x;
        b = y;
    }
    void print_data()
    {
        cout << a <<" " << b <<"i";
    }
    Complex add(Complex c){
        Complex temp; // creating temp object of Complex class
        // here 'a' refers to 'a' value of calling object i.e c1
        // c.a refers to 'a' value of object c2.
        temp.a= a+ c.a;
        temp.b= b+ c.b;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3; // (Instance of a class is know as object)
    c1.set_data(2, 5);
    c2.set_data(4,6);
    c3=c1.add(c2);
    c3.print_data();

}
