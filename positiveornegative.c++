#include <iostream>
using namespace std;


int main()
{
	int n;
    
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n>0)
    {
    cout<<"The given number is positive"<<n;
    }
    else if(n<0)
    {
    cout<<"The given number is negative"<<n;
    }
    else
    {
    cout<<"The given number is neither positive nor negative";
    }
    return 0;
}
