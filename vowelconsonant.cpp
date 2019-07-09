#include <iostream>
using namespace std;
int main() {
      char letter;
      cin>>letter;
      if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')
      {
      	cout<<"Vowel";
      }
      else if(letter>=65 && letter<= 90 || letter>=97 && letter<=122)
      {
      	cout<<"Consonant";
      }
      else
      {
      	cout<<"invalid";
      }
	return 0;
}
