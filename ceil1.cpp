#include <iostream>
using namespace std;
int ceiling(float a,int ceil)
{
	if(a>0&&a!=ceil)
	{
		cout<<ceil+1<<endl;
	}
	else
	{
		cout<<ceil<<endl;
	}
}
int main()
{
	float a;
	int ceil;
	cout<<"Enter your number:"<<endl;
	cin>>a;
	ceil=a;
	ceiling(a,ceil);
}
