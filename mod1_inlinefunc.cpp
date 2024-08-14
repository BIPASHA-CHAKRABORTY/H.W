#include <iostream>
using namespace std;

inline int mult(int x, int y)
{
    return x*y;
}
inline int add(int x,int y)
{
    return x+y;
}
int main()
{
    cout<<"Multiplication:"<<mult(2,6)<<endl;
    cout<<"Addition:"<<add(1,2);
    
    
    return 0;
}
