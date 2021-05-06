#include <iostream>
using namespace std;
int flooring(float num,int floor)
{
	if(num<0&&num!=floor)
	{
		cout<<floor-1<<endl;
	}
	else
	{
		cout<<floor<<endl;
	}
}
int main()
{
	float num;
	int floor;
	cout<<"Enter a float number"<<endl;
	cin>>num;
	floor=num;
	flooring(num,floor);
}
