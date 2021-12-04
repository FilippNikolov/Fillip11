#include <iostream>

using namespace std;

int main()

{
	int b1000,b500,b100,b50,b10,s,ostatok;
	//3780
	cin>>s;
	b1000=s/1000;//3
	ostatok=s%1000;//780
	 
	b500=ostatok/500;//1
	ostatok=ostatok%500;//280

	b100=ostatok/100;//2
	ostatok=ostatok%100;//80

	b50=ostatok/50;//1
	ostatok=ostatok%50;//30

	b10=ostatok/10;//3
	cout<<b1000+b500+b100+b50+b10; 
}
