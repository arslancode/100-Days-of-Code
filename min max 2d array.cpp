#include <iostream>
using namespace std;
int main()
{
	int m,n,a[10][10],i,j,min,max;
	cout<<"Enter rows and columns you want in your matrix array"<<endl;
	cin>>m>>n;
	cout<<"Fill out matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	max=a[0][0];
	min=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			else if(a[i][j]<min)
			min=a[i][j];
		}
	}
	cout<<"Maximum value in the array is: "<<max<<endl;
	cout<<"Minimum value in the array is: "<<min<<endl;
	
}
