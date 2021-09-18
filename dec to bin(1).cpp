#include <iostream>
using namespace std;

int main()
{
     int Dec,Bin,i=0;
     int arrayBin[100];
     
     cout << "Decimal Number : ";
     cin>>Dec;
     
     while(Dec != 0)
     {
          Bin = Dec % 2;
          arrayBin[i] = Bin;
          i++;
          Dec = Dec/2;
     }
     
     cout << "Binary : ";
     for(int j=i-1;j>=0;j--)
     {
          cout<<arrayBin[j];
     }
     cout<<endl;
     system("pause");
 
}
