#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"Please enter the number:";
 cin>>a;
while(a!=1)
{
if(a%2==1)
{
 a=a*3+1;
}
else
a=a/2;
cout<<a<<endl;
}
return 0;
}

