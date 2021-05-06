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
int main()
{
	char s1,s2;
	cout<<"Welcome to rock paper scissors game!"<<endl;
	cout<<"Let's Begin"<<endl;
	cout<<"Enter r for Rock,p for Paper,and s for Scissors"<<endl;
	char choice;
	do
	{
		cout<<"First turn player one enter Second turn player two enter"<<endl;
		cin>>s1>>s2;
		whowins(s1,s2);
		cout<<"                                                         "<<endl;
		cout<<"do you want to continue paying?"<<" Y for yes|| N for no"<<endl;
		cin>>choice;
	}
	while(choice=='Y'||choice=='y');
	return 0;
}

