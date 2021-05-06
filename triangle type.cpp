#include<iostream>
using namespace std;
int distancesquare(int p1x,int p1y,int p2x,int p2y)
{
	return (p1x-p2x)*(p1x-p2x)+(p1y-p2y)*(p1y-p2y);
}
void TT(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y)
{
	int s1,s2,s3;
	s1=distancesquare(p1x,p1y,p2x,p2y);
	s2=distancesquare(p2x,p2y,p3x,p3y);
	s3=distancesquare(p3x,p3y,p1x,p1y);
	if(s1==s2&&s1==s3)
	{
		cout<<"It is an equilateral triangle"<<endl;
	}
	else if(s1==s2||s2==s3||s3==s1)
	{
		if(s1==s2+s3||s2==s3+s1||s3==s1+s2)
		{
			cout<<"It is an iscosceles right triangle"<<endl;
		}
		else
		{
			cout<<"It is iscosceles triangle"<<endl;
		}
	}
	else if(s1==s2+s3||s2==s3+s1||s3==s1+s2)
	{
		cout<<"It is a right triangle"<<endl;
	}
	else
	{
		cout<<"It is a scalene triangle"<<endl;
	}
}
int main()
{
	int p1x,p1y,p2x,p2y,p3x,p3y;
	cout<<"Enter the coordiante for side 1"<<endl;
	cin>>p1x>>p1y;
	cout<<"Enter the coordiante for side 2"<<endl;
	cin>>p2x>>p2y;
	cout<<"Enter the coordiante for side 3"<<endl;
	cin>>p3x>>p3y;
	TT(p1x,p1y,p2x,p2y,p3x,p3y);
}

