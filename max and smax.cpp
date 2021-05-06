#include<iostream>
using namespace std;
void SMAX(int a,int b,int c)
{
	if((a>b&&a<c)||(a<b&&a>c))
	{
		cout<<a<<" Is the second maximum in the list"<<endl;
	}
	else if((b<a&&b>c)||(b>a&&b<c))
	{
		cout<<b<<" Is the second maximum in the list"<<endl;
	}
	else
	{
		cout<<c<<" Is the second maximum in the list"<<endl;
	}
}
void MAX(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		cout<<a<<" Is the highest number"<<endl;
	}
	else if(b>a&&b>c)
	{
		cout<<a<<" Is the highest number"<<endl;
	}
	else
	{
		cout<<c<<" Is the highest number"<<endl;
	}
}
int main()
{
	int a,b,c;
	cout<<"Enter three numbers a,b,c"<<endl;
	cin>>a>>b>>c;
	MAX(a,b,c);
	SMAX(a,b,c);
}

