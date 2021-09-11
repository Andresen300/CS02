#include <iostream>
using namespace std;

void ShowSum(int,int, int);

int main()
{
    int v1,v2,v3;
    cin >> v1>>v2>>v3;
    ShowSum(v1,v2,v3);
//test
}
void ShowSum (int num1,int num2, int num3)
{
    cout << (num1+num2+num3)<<endl;
}
