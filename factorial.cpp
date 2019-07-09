#include <iostream>
using namespace std;
int main() {
int f=1,i,n;
cin>>n;
if(n<=20)
{
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<f;
}
	return 0;
}
