#include <iostream>

using namespace std;

double average_via_pointer(int& value_one, int& value_two);

double average_via_value(int copied_value1, int copied_value2);

int main()
{
    int x =5, y= 9;
    int a =2, b=3;

    double Pointer_average = average_via_pointer(x,y);

    cout<< "average via pointers is "<< Pointer_average<< endl;
    cout<<"value of x in main is: "<<x<<endl;
    cout<<"value of y in main is: " <<y<<endl;

    double Copied_average = average_via_value(a,b);

    cout<<"average via copy is: " << Copied_average<< endl;
    cout<<"
    value of a in main is: "<<a<< endl;
    cout<<"value of b in main is: "<<b<< endl;

    return 0;
}
double average_via_pointer(int& value_one, int& value_two)
{
    value_one= value_one+1;
    value_two= value_two+1;
     cout<<"value of x in function is: " << value_one<<endl;
     cout<<"value of y in function is: " <<value_two<<endl;

    return (value_one+value_two)/2;
}

double average_via_value(int copied_value1, int copied_value2)
{
    copied_value1 = copied_value1+1;
    copied_value2 = copied_value2+1;
    cout<< "value of a in function is: "<<copied_value1<< endl;
    cout<<"value of b in function is: "<< copied_value2<< endl;


    return (copied_value1+copied_value2)/2;
}


