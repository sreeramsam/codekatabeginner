#include <iostream>
using namespace std;
int main() {
int n;
int a=0;
cin>>n;
while(n!=0)
{
	n=n/10;
	a++;
}
cout<<a;
	return 0;
}
