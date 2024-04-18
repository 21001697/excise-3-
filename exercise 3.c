include <iostream>
#include <string>
using namespace std;

int main()
{

  int age;


  cout << " Please Enter your age "<<endl;
  cin>>age;

  if(age<16)
    {
    cout<<"you are a minor"<<endl;

}
else
  if(age>25)
    {
        cout<<"you are eligible"<<endl;
    }

else
{
    cout<<"you are too old"<<endl;
}


  return 0;
}
