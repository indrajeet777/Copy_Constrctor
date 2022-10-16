#include<iostream>

class A{

private :
int x,y;

public :

A(int a, int b){
	std::cout<<"Inside class A"<<std::endl;
	x=a; y=b;
	std::cout<<x<<","<<y<<std::endl;
}

A (A const & obj)
{
	x=obj.x;
	y=obj.y;
	std::cout<<x<<","<<y<<std::endl;
}

};


int main()
{
	A objOfA(2,3);
	A copyObjOfA = objOfA;
	return 0;
}
