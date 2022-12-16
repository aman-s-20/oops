#include <bits/stdc++.h>
using namespace std;

class Integer
{
private:
    int a;

public:
    void set_data(int x){
        a=x;
    }
    void show_data()
    {
        cout << "a " << a << "\n";
    }
    // preIncrement using operator overloading
    Integer operator++(){
        Integer i;
        i.a=++a;
        return i;
    }
    // postIncrement using operator overloading
    Integer operator++(int){// we have to write int so that compiler can differentiate 
                            // jisbhi fun me int pass krenge vo postIncrementer ki tarah kaam krega
        Integer i;
        i.a=a++;
        return i;
    }
};

int main()
{
    Integer i1,i2,i3;
    i1.set_data(4);
    i2=++i1;
    i1.show_data();
    i2.show_data();
    i3=i1++;
    i1.show_data();
    i3.show_data();
}
