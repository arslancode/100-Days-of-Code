#include<iostream>
using namespace std;
int summation(int num,int sum=0)
{
	sum=sum+num%10;
	num=num/10;
	sum=sum+num%10;
	num=num/10;
	sum=sum+num%10;
	num=num/10;
	sum=sum+num%10;
	num=num/10;
	sum=sum+num%10;
	num=num/10;
	sum=sum+num%10;
	return sum;
}
int main()
{
	int num;
	int sum=0;
	cout<<"Enter a six digit number"<<endl;
	cin>>num;
	if(num<100000||num>999999)
	{
		cout<<"It is not a six digit number!"<<endl;
	}
	else
	{
		sum=summation(num,sum);
		cout<<"SUM="<<sum<<endl;
	}
}
