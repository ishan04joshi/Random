#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<endl ;
    cin>>age;
    if(age<18){
    cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You will get a kid certificate"<<endl;
    }
        else{
            cout<<"You can come to the party"<<endl;
        }
    return 0;
    
    
}