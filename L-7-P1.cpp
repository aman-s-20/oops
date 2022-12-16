#include <bits/stdc++.h>
using namespace std;

// class and object and member function using scope resolution opertor
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
        cout << "x=" << a << " y=" << b << "\n";
    }
};

/*
If we write set_Data function outside the class then we have to write membership label( Complex:: ) in between return 
type and name of function

    void Complex:: set_data(int x,int y){
        a=x;
        b=y;
    }

 */
int main()
{
    Complex c1; // (Instance of a class is know as object)
    c1.set_data(2, 5);
    c1.print_data();
}
