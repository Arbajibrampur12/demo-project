#include<iostream>
using namespace std;
class Factorial
{
	protected:
		int n,i,fact;
	public:
		Factorial()
		{
			fact=1;
		}
		void display();
		void factorial();
};
void Factorial::factorial()
{
	cout<<"\n enter number :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
}
void Factorial::display()
{
	cout<<"\n factorial of given number :"<<fact<<endl;
}
main()
{
	Factorial f;
	f.factorial();
	f.display();
}
