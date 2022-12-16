#include <bits/stdc++.h>
using namespace std;

// Add two complex number using operator overloading..
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
        cout << a <<" " << b <<"i\n";
    }
    Complex add(Complex c){
        Complex temp; // creating temp object of Complex class
        // here 'a' refers to 'a' value of calling object i.e c1
        // c.a refers to 'a' value of object c2.
        temp.a= a+ c.a;
        temp.b= b+ c.b;
        return temp;
    }
    // this works same as add (we have done opertor overloading )
    Complex operator +(Complex c){// we cannot write + as name of any function but by writing operator infront of it, we can
        Complex temp; 
        temp.a= a+ c.a;
        temp.b= b+ c.b;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3,c4,c5; // (Instance of a class is know as object)
    c1.set_data(2, 5);
    c2.set_data(4,6);
    c3=c1.add(c2);
    // adding c1 and c2 using add function 
    c3.print_data();
    // adding c1 and c2 using operator overloading 
    c4=c1.operator+(c2);
    c4.print_data();
    // c1.operator+(c2) we can replace this with c1+ c2;
    c5=c1+c2;
    c5.print_data();



}
