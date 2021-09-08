#include <iostream>

using namespace std;

int main()
{
    const int N=10;
    int array [N]={5,7,2,4,6,7,10,1,3,9};
    
    for (int i=1; i<9; i++)
    {
        if (array[i]> array[i-1]&& array[i] <array[i+1])
        {
            cout << array[i] << "\t";
        }
    }
}