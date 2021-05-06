#include<iostream>
using namespace std;
int distancesquare(int p1x,int p1y,int p2x,int p2y)
{
	return (p1x-p2x)*(p1x-p2x)+(p1y-p2y)*(p1y-p2y);
}
int QT(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y)
{
	int s1,s2,s3,s4,dg1,dg2;
	s1=distancesquare(p1x,p1y,p2x,p2y);
	s2=distancesquare(p2x,p2y,p3x,p3y);
	s3=distancesquare(p3x,p3y,p4x,p4y);
	s4=distancesquare(p4x,p4y,p1x,p1y);
	dg2=distancesquare(p2x,p2y,p4x,p4y);
	dg1=distancesquare(p1x,p1y,p3x,p3y);
	if(s1==s2&&s1==s3&&s1==s4)
	{
		if(dg1==dg2)
		{
			cout<<"It is a square"<<endl;
		}
		else
		{
			cout<<"It is a rhombus"<<endl;
		}
	}
	else if(s1=s2&&s3==s4&&s1!=s3)
	{
		if(dg1==dg2)
		{
			cout<<"It is a rectangle"<<endl;
		}
		else 
		{
			cout<<"It is a parallelogram"<<endl;
		}
	}
	else
	{
		cout<<"It is some other quadilateral"<<endl;
	}
}
int main()
{
	int p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y;
	cout<<"Enter co-ordiantes x and y for side 1:"<<endl;
	cin>>p1x>>p1y;
	cout<<"Enter co-ordiantes x and y for side 2:"<<endl;
	cin>>p2x>>p2y;
	cout<<"Enter co-ordiantes x and y for side 3:"<<endl;
	cin>>p3x>>p3y;
	cout<<"Enter co-ordiantes x and y for side 4:"<<endl;
	cin>>p4x>>p4y;
	QT(p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y);
}

