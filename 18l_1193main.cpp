#include"Header.h"
#include<iostream>
using namespace std;
int main()
{
	
	student s1;
	s1.setgpa(3);
	student();
	s1.addquizscore(10);
	s1.addquizscore(3);
	s1.addquizscore(7);
	s1.print();

	student s2(2,4);

	s2.addquizscore(67);
	s2.addquizscore(6);
	s2.addquizscore(9);
	s2.print();

	student s3(s1);//copy constructor will be invoked

	s3.update(2,4);
	s3.update(4,7);
	cout<<s3.compare(s1);//copy constructor will be invoked because s1 is being passed  by valued and compare function is invoked 
	s3.print();
	cout<<endl;
	s1.print();
	//destructor is invoked for s3 
	//destructor is invoked for s2
	//destructor is invoked for s1
	system("pause");
}