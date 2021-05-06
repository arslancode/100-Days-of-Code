#include <iostream>
using namespace std;
char HSA(int pf1,int pf2,int pf3,int ict1,int ict2,int ict3,int eng1,int eng2,int eng3,int math1,int math2,int math3,int phy1,int phy2,int phy3,int sum1,int sum2,int sum3,char a,char b,char c)
{
	if(sum1>sum2&&sum1>sum3)
	{
		return 'a';
	}
	if(sum2>sum1&&sum2>sum3)
	{
		return 'b';
	}
	if(sum3>sum2&&sum3>sum1)
	{
		return 'c';
	}
}
int main()
{
	char a,b,c;
	int pf1,pf2,pf3,ict1,ict2,ict3,eng1,eng2,eng3,math1,math2,math3,phy1,phy2,phy3;
	int sum1,sum2,sum3;
	cout<<"Enter name and marks of student (name (i.e a,b,c) PF ICT ENG MATH PHY each in new line) "<<endl;
	cin>>a>>pf1>>ict1>>eng1>>math1>>phy1;
	sum1=pf1+ict1+eng1+math1+phy1;
	cout<<"Enter name and marks of student (name (i.e a,b,c) PF ICT ENG MATH PHY each in new line) "<<endl;
	cin>>b>>pf2>>ict2>>eng2>>math2>>phy2;
	sum1=pf2+ict2+eng2+math2+phy2;
	cout<<"Enter name and marks of student (name (i.e a,b,c) PF ICT ENG MATH PHY each in new line) "<<endl;
	cin>>c>>pf3>>ict3>>eng3>>math3>>phy3;
	sum1=pf2+ict3+eng3+math3+phy3;
	HSA(pf1,pf2,pf3,ict1,ict2,ict3,eng1,eng2,eng3,math1,math2,math3,phy1,phy2,phy3,sum1,sum2,sum3,a,b,c);
	switch(HSA(pf1,pf2,pf3,ict1,ict2,ict3,eng1,eng2,eng3,math1,math2,math3,phy1,phy2,phy3,sum1,sum2,sum3,a,b,c))
	{
		case 'a':
		cout<<"student a got highest marks"<<endl<<sum1<<endl;
		break;
		case 'b':
		cout<<"student b got highest marks"<<endl<<sum2<<endl;
		break;
		case 'c':
		cout<<"student c got highest marks"<<endl<<sum3<<endl;
		break;
	}
}

	
