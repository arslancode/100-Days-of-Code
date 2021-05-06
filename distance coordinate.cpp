#include <bits/stdc++.h> 
using namespace std; 
   
float distance(int xx1, int yy1, int xx2, int yy2) 
{  
	
	return (((xx1-xx2)*(xx1-xx2))+((yy1-yy2)*(yy1-yy2)));
} 
int main() 
{ 
	int x1,x2,y1,y2,result;
    cout<<"Enter x1"<<endl;
	cin>>x1;
	cout<<"Enter y1"<<endl;
	cin>>y1;
	cout<<"Enter x2"<<endl;
	cin>>x2;
	cout<<"Enter y2"<<endl;
	cin>>y2; 
	
	result = distance(x1,y1,x2,y2);
	
	cout<<"Your distance btw two points is "<<result;
    return 0; 
} 
