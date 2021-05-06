#include<iostream>
using namespace std;
int whowins(char s1,char s2)
{
	if((s1=='s'&&s2=='p')||(s1=='p'&&s2=='r')||(s1=='r'&&s2=='s'))
	{
		cout<<"Player One wins"<<endl;
	}
	else if((s1=='p'&&s2=='s')||(s1=='r'&&s2=='p')||(s1=='s'&&s2=='r'))
	{
		cout<<"Player Two wins"<<endl;
	}
	else
	{
		cout<<"It's a tie"<<endl;
	}
}
int calculator(int a,int b,char sym)
{
	switch(sym)
	{
		case '+':
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
		break;
		case '-':
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
		break;
		case '*':
		cout<<a<<"*"<<b<<"="<<a*b<<endl;
		break;
		case '/':
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
		break;
		case '%':
		cout<<a<<"%"<<b<<"="<<a%b<<endl;
		break;
	}
}
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

void MON(int p,int q)
{
	if(p%q==0)
	{
		cout<<p<<" is multple of "<<q<<endl;
	}
	else if(q%p==0)
	{
		cout<<q<<" is multple of "<<p<<endl;
	}
	else
	{
		cout<<"Neither p nor q is multiplle of eachother"<<endl;
	}
}

char avg(float a,float b,float c,float d,float e,float f)
{
	if(b>a&&b>c&&b>d&&b>e&&b>f)
	{
		return 'b';
	}
	else if(c>b&&c>a&&c>d&&c>e&&c>f)
	{
		return 'c';
	}
	else if(d>b&&d>c&&d>a&&d>e&&d>f)
	{
		return 'd';
	}
	else if(e>b&&e>c&&e>d&&e>a&&e>f)
	{
		return 'e';
	}
	else if(a>b&&a>c&&a>d&&a>e&&a>f)
	{
		return 'a';
	}
	else if(f>b&&f>c&&f>d&&f>e&&f>a)
	{
		return 'f';
	}
}

int flooring(float number,int floor)
{
	if(number<0&&number!=floor)
	{
		cout<<floor-1<<endl;
	}
	else
	{
		cout<<floor<<endl;
	}
}

int D2W(int num)
{
	int num1,num2,num3,num4,num5;
	int A,B,C,D,E,F;
	if(num<100000||num>999999)
	{
		cout<<"Invalid input"<<endl;
		cout<<"It's not a six digit number"<<endl;
	}
	else
	{
		A=num/100000;
		num1=num%100000;
		switch(A)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		B=num1/10000;
		num2=num1%10000;
		switch(B)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		C=num2/1000;
		num3=num2%1000;
		switch(C)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		D=num3/100;
		num4=num3%100;
		switch(D)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		E=num4/10;
		num5=num4%10;
		switch(E)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		F=num5/1;
		switch(F)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
	}
}

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

void CR(char character,int symbol)
{
	symbol=int(character);
	if(symbol>=65&&symbol<=90)
	{
		cout<<"Capital Alphabet"<<endl;
	}
	else if(symbol>=97&&symbol<=122)
	{
		cout<<"Small Alphabet"<<endl;
	}
	else
	{
		cout<<"Invalid Input!"<<endl;
	}
}

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
	int a;
	char choice;
	do
	{
	
	cout<<"Welcome to Arslan's Menu Based Programs"<<endl;
	cout<<"Enter the index number of program you want to run"<<endl;
	cout<<"1. Calculator"<<endl;
	cout<<"2. Max and Second Max"<<endl;
	cout<<"3. Triangle Type"<<endl;
	cout<<"4. Quadilateral Type"<<endl;
	cout<<"5. Point lies inside quadilateral or not"<<endl;
	cout<<"6. Multiple or Not?"<<endl;
	cout<<"7. Highest Section Average"<<endl;
	cout<<"8. Floor"<<endl;
	cout<<"9. Digit to Words"<<endl;
	cout<<"10 Digit Summation"<<endl;
	cout<<"11 Capital or Smaller Alphabet"<<endl;
	cout<<"12 Ceiling"<<endl;
	cout<<"13 Highest Marks Average By Students"<<endl;
	cout<<"14. Rock Paper Scissors"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
		int a,b;
		char sym;
		cout<<"Enter the expression in a+b form:"<<endl;
		cin>>a>>sym>>b;
		calculator(a,b,sym);
		break;
		case 2:
		int aa,bb,cc;
		cout<<"Enter three numbers a,b,c"<<endl;
		cin>>aa>>bb>>cc;
		MAX(aa,bb,cc);
		SMAX(aa,bb,cc);	
		break;
		case 3:
		int p1x,p1y,p2x,p2y,p3x,p3y;
		cout<<"Enter the coordiante for side 1"<<endl;
		cin>>p1x>>p1y;
		cout<<"Enter the coordiante for side 2"<<endl;
		cin>>p2x>>p2y;
		cout<<"Enter the coordiante for side 3"<<endl;
		cin>>p3x>>p3y;
		TT(p1x,p1y,p2x,p2y,p3x,p3y);
		break;
		case 4:
		int pp1x,pp1y,pp2x,pp2y,pp3x,pp3y,pp4x,pp4y;
		cout<<"Enter co-ordiantes x and y for side 1:"<<endl;
		cin>>pp1x>>pp1y;
		cout<<"Enter co-ordiantes x and y for side 2:"<<endl;
		cin>>pp2x>>pp2y;
		cout<<"Enter co-ordiantes x and y for side 3:"<<endl;
		cin>>pp3x>>pp3y;
		cout<<"Enter co-ordiantes x and y for side 4:"<<endl;
		cin>>pp4x>>pp4y;
		QT(pp1x,pp1y,pp2x,pp2y,pp3x,pp3y,pp4x,pp4y);
		break;
		case 5:
		int ppp1x,ppp2x,ppp3x,ppp4x,ppp1y,ppp2y,ppp3y,ppp4y,pppx,pppy;
		cout<<"Enter the x and y coordinates of your point."<<endl;
		cin>>pppx>>pppy;
		cout<<"Enter the co-ordinates of side 1 x and y"<<endl;
		cin>>ppp1x>>ppp1y;
		cout<<"Enter the co-ordinates of side 2 x and y"<<endl;
		cin>>ppp2x>>ppp2y;
		cout<<"Enter the co-ordinates of side 3 x and y"<<endl;
		cin>>ppp3x>>ppp3y;
		cout<<"Enter the co-ordinates of side 4 x and y"<<endl;
		cin>>ppp4x>>ppp4y;
		PP(ppp1x,ppp2x,ppp3x,ppp4x,ppp1y,ppp2y,ppp3y,ppp4y,pppx,pppy);
		break;
		case 6:
		int p,q;
		cout<<"Enter num p and num q"<<endl;
		cin>>p>>q;
		MON(p,q);
		break;
		case 7:
		int ava,avb,avc,avd,ave,avf;
		cout<<"Enter averages of sections aphabetically one after another:"<<endl;
		cin>>ava>>avb>>avc>>avd>>ave>>avf;
		avg(ava,avb,avc,avd,ave,avf);
		switch(avg(ava,avb,avc,avd,ave,avf))
		{
			case 'a':
			cout<<"A got highest average"<<ava<<endl;
			break;
			case 'b':
			cout<<"B got highest average"<<avb<<endl;
			break;
			case 'c':
			cout<<"C got highest average"<<avc<<endl;
			break;
			case 'd':
			cout<<"D got highest average"<<avd<<endl;
			break;
			case 'e':
			cout<<"E got highest average"<<ave<<endl;
			break;
			case 'f':
			cout<<"F got highest average"<<avf<<endl;
			break;
		}
		break;
		case 8:
		float number;
		int floor;
		cout<<"Enter a float number"<<endl;
		cin>>number;
		floor=number;
		flooring(number,floor);
		break;
		case 9:
		int number1;
		cout<<"Enter a six digit number"<<endl;
		cin>>number1;
		D2W(number1);
		break;
		case 10:
		int number2;
		int summ=0;
		cout<<"Enter a six digit number"<<endl;
		cin>>number2;
		if(number2<100000||number2>999999)
		{
			cout<<"It is not a six digit number!"<<endl;
		}
		else
		{
			summ=summation(number2,summ);
			cout<<"SUM="<<summ<<endl;
		}
		break;
	}
	cout<<"Do you want to use anyother program? Y for yes|| N for no"<<endl;
	cin>>choice;
}
while(choice=='Y'||choice=='y');
}
