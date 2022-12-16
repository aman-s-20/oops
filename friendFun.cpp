#include <bits/stdc++.h>
using namespace std;
// concept of friend function

class Person
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data(){
        cout<<a<<" "<<b<<"\n";
    }
    friend void show_data_Friend(Person p);

};
// friend funcion ;
// print data using friend function
// we cannot access directly a and b but we can access by p.a and p.b

void show_data_Friend(Person p){
    cout<<p.a<<" "<<p.b<<"\n";
}

int main()
{
    Person p;
    p.set_data(3,5);
    p.show_data();
    show_data_Friend(p);
}
