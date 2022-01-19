#include <iostream>
using namespace std;

int main() {
    int row;
    int col;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>col;
   int i;
   int j;
   for(i=1; i<=row; i++){
  if(i==1 || i==row)
  {
      for(j=1; j<=col; j++){
          cout<<"*";
      }
  }
  else 
  {
      for(j=1; j<=col; j++){
          
          if(j==1 || j==col)
          {
              cout<<"*";
          }
          else {
              cout<<" ";
          }
          
      }
  }
  cout<<endl;
   }
    return 0;
}