#include <iostream>
#include <string>

using namespace std;



 int main()
 {
   char cstr[] = "chocolate";
   char ustr[] = "col";
   int i,j;

   for i=0; i< strlen(cstr)-strlen(ustr)+1; i++)
   {
     for ( j=0; j<strlen(ustr); j++)
     {
       if (cstr[i] != ustr[j])
        break;
     }
     if (j == strlen(ustr))
      cout << "Found at the index << i << endl";
   }


 }