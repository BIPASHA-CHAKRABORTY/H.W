#include <iostream>
using namespace std;

class rectangle
{
  private:
      int L, B, A;
  public:
      void input(int length, int breadth)
      {
          L = length;
          B = breadth;
      }

      void Area()
      {
          A = L * B;
      }

      
      void display() 
      {
          cout << "Value of Length: " << L << endl;
          cout << "Value of Breadth: " << B << endl;
          cout << "Area of Rectangle: " << A << endl;
      }
};

int main()
{
    rectangle R;
    
    
    R.input(4, 5);
    R.input(2, 9);
    
    
    R.Area();
    
    
    R.display();

    return 0;
}
