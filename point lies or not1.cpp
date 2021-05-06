#include<iostream>
using namespace std;
void PP(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y,int px,int py)
{
	if(
	(px<p1x||px<p2x||px>p3x||px>p4x)&&(py<p1y||py<p2y||py>p3y||py>p4y))
	{
		cout<<"Point lies outside the borders of rectangle"<<endl;
	}
	else if((px>p1x||px<p2x||px<p3x||px>p4x)&&(py>p1y||py<p2y||py<p3y||py>p4y))
	{
		cout<<"Point lies inside the borders of rectangle"<<endl;
	}
	else
	{
		cout<<"Point lies on the borders of the rectangle"<<endl;
	}
}
int main()
{
	int p1x,p2x,p3x,p4x,p1y,p2y,p3y,p4y,px,py;
	cout<<"Enter the x and y coordinates of your point."<<endl;
	cin>>px>>py;
	cout<<"Enter the co-ordinates of side 1 x and y"<<endl;
	cin>>p1x>>p1y;
	cout<<"Enter the co-ordinates of side 2 x and y"<<endl;
	cin>>p2x>>p2y;
	cout<<"Enter the co-ordinates of side 3 x and y"<<endl;
	cin>>p3x>>p3y;
	cout<<"Enter the co-ordinates of side 4 x and y"<<endl;
	cin>>p4x>>p4y;
	PP(p1x,p2x,p3x,p4x,p1y,p2y,p3y,p4y,px,py);
}

