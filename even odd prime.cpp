#include <iostream>
using namespace std;
void PN(int m,int n,int i,int flag)
{
	flag=0;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag=1)
	{
		cout<<"it is not a prime number"<<endl;
	}
	else if(flag=0)
	{
		cout<<"It is a prime number"<<endl;
	}
}
void EOO(int n)
{
	if(n%2==0)
	{
		cout<<"it is an even number"<<endl;
	}
	else if(n%2!=0)
	{
		cout<<"It is an odd number"<<endl;
	}
}
int main()
{
	int n,m,i,flag=0;
	cout<<"Enter your number"<<endl;
	cin>>n;
	PN(m,n,i,flag);
	EOO(n);
	
}
