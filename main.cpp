#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

int sumarea(shape &s1,shape&s2)
{
	float a=s1.area();
	float b=s2.area();
	int sum=a+b;
	return sum;
}

int main()
{
		triangle t1(1.0,9.0, "Red");
		
		circle c1(2, "Blue");
		
		rectangle r1(6,2, "Orange");
		cout<<t1.area();
		cout<<endl;
		cout<<t1.color;
		cout<<endl;
		cout<<c1.area();
		cout<<endl;
		cout<<r1.area();
		cout<<endl;
		shape *sptr1= &t1;
		shape &sref=r1;
		cout<< sptr1->area();
		cout<<endl;
		cout<< sptr1->color;
		cout<<endl;
		cout<< sref.color;
		cout<<endl;
		cout<< sref.area();
		cout<<endl;

			/*
			Exercise two output::
			4.5
			Red
			12.56
			12
			4.5
			Red
			Orange
			12*/

		shape s1("purple");
 
		cout<<sumarea(t1,c1);
		cout<<endl;
		cout<<sumarea(s1,r1);
		cout<<endl;
		cout<<sumarea(s1,t1);
		cout<<endl;


		int count=5;
		shape ** shapesarray=new shape * [count];
		
		for(int i=0;i<count;)
		{
		
		cout<<"Press 1 for a triangle, 2 for rectangle and 3 for a circle."<<endl;

		float l,w;
		string color;
		int s=0;
		cin>>s;

		if(s==1)
		{
			
				cout<<"enter base:"<<endl;
				cin>>w;
				cout<<"enter height"<<endl;
				cin>>l;
				cout<<"enter color: "<<endl;
				cin>>color;
				triangle t(l,w,color);
				shapesarray[i]=&t;
				cout<<"area of triangle:"<<shapesarray[i]->area()<<endl;
				i++;
				
		}
		if(s==2)
		{
			
				cout<<"enter width:"<<endl;
				cin>>w;
				cout<<"enter length"<<endl;
				cin>>l;
				cout<<"enter color: "<<endl;
				cin>>color;
				rectangle r(l,w,color);
				shapesarray[i]=&r;
				cout<<"area of rectangle:"<<shapesarray[i]->area()<<endl;
				i++;
				
			
		}

		if(s==3)
		{
			
				cout<<"enter raius:"<<endl;
				cin>>w;
				cout<<"enter color: "<<endl;
				cin>>color;
				circle c(w,color);
				shapesarray[i]=&c;
				cout<<"area of circle:"<<shapesarray[i]->area()<<endl;
				i++;
		}

		}

		delete [] shapesarray;

		system ("pause");
}