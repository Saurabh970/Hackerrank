#include<iostream>
#include<cmath>
using namespace std;
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool find_inside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{  
   float A = area (x1, y1, x2, y2, x3, y3);
   float A1 = area (x, y, x2, y2, x3, y3);
   float A2 = area (x1, y1, x, y, x3, y3); 
   float A3 = area (x1, y1, x2, y2, x, y);
   return (A == A1 + A2 + A3);
}

int main()
{
	int x1,x2,x3,x,y1,y2,y3,y;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cin>>x>>y;
	if(find_inside(x1,y1,x2,y2,x3,y3,x,y))
	{
		cout<<"Caught";
	}
	else
	{
		cout<<"Not Caught";
	}
	
}