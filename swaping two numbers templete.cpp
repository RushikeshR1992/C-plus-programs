#include <iostream>
using namespace std;
  
// Function template to swap
// two numbers
template <class T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
// Driver code
int main()
{
    int a, b;
    cout<<"Enter the No.A and B";
    cin>>a>>b;
  
  
    // Invoking the swap()
    swap_numbers(a, b);
    cout << "A = "<<a <<endl << "b = "<<b<< endl;
    return 0;
}




