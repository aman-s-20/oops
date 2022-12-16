#include <bits/stdc++.h>
using namespace std;
// static member variable and function 
// changing member varible without creating any object.


class Account
{
private:
    int balance;
    static int roi;

public:
    void setBalance(int b)  // we can write this function outside of this class also but we have to decleare it here.
    { 
        balance =b;
    }
    static void setRoi(int r){
        roi =r;
    }

    void print_data()
    {
        cout <<"balance->"<< balance <<"\n" <<"rate of interest->"<<roi<<"\n";
    }
};
int Account:: roi=6;
int main()
{   
    Account::setRoi(3);
    // I can change the value of member varible (roi) without creating an object 
    // sounds intresting...
    
     
    Account a; 
    a.print_data();// In this case I set value of roi before object creation so roi is 3 but balance is garbage.
    a.setBalance(4);
    a.setRoi(7);
    a.print_data();


}
