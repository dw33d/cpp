#include <iostream>
using namespace std;



int a_function(int i, int d) 
{
   return d+i;
}

int another_function(int i, int d)
{
    return d*i;
}

void print_a_value(int i, int d)
{   

   cout<<"The values it seems are "<<a_function(d, i)<<" and "<<another_function(d, i)<< " which are taken from " << d << " and "<< i;
}

int main()
{
    print_a_value(2, 7);
}

