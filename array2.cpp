#include <iostream>
using namespace std;
// change order of array
 void displayValue(int [], int);

int main()
{
  const int N = 10;
  int array [N]= {5,7,2,4,6,7,10,1,3,9};
  int tmp;

  void printArray ( int n[], int N)

  for (int i=0; i<N/2; i++)
  {
    tmp = array[i];
    array[i] = array [N-i-1]; // mast change to 9,8,7
    array [N-i-1] = tmp;
 // or swap (array [i], array[N-i-1]);
  }
  //for (int i=0; i<N; i++)
  //{
    //cout << array[i]<< "  ";
  //
  //printArray (array, N);
 
 {
   for (int i=0; i<N; i++)
    cout << n[i] << "t";
  cout << endl;
 }

}