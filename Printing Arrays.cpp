#include <iostream>
using namespace std;
int main()
{
  int array_size = 10;
  int array[array_size] ;
  cout << "Displaying Array..." << endl;

  for(int j=0; j<10;j++)
  {
      cin>>array[j];
  }
  for(int i = 0; i < array_size; i++)
  {

    cout << "Array[" << i << "] => " << array[i] << endl;
  }
  return 0;
}
