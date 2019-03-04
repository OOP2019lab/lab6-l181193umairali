
#include"header.h"
#include<iostream>
using namespace std;

int student::counter=0;//static counter initialization

student::student()
{
	quizcap=3;
	counter++;
	q=0;
	id =counter;
	quizescore=nullptr;
	quiztaken=0;
	gpa=-1;
	quizescore=new float[quizcap]; 
}
student ::student(int quizcap1,float Gpa1)
{
	quizcap=quizcap1; 
	counter++;
	q=0;
	id=counter;
	quiztaken=0;
	quizescore=nullptr;
	gpa=Gpa1;
	quizescore=new float[quizcap];
}
void student::setgpa(float Gpa)
{
	gpa=Gpa;
}
float student::getgpa(){
	if(gpa>=0&&gpa<4)
	{
		return gpa;
	}
	else 
		return 0;
}

void student::addquizscore( int score)
{ 
	if(quizescore!=nullptr){
		if(quiztaken<quizcap)
		{
			quizescore[quiztaken]=score;
			quiztaken++;
		}
		else 
			q=1;
	}

}
student ::student (student &y){
	id=y.id;
	quizcap=y.quizcap;
	gpa=y.gpa;
	quiztaken=y.quiztaken;
	quizescore=new float[quizcap]; 
	for(int i=0;i<quizcap;i++)
	{
		quizescore[i]=y.quizescore[i];
	}
}
void student ::print()const
{
	cout<<"Student id is : "<<id<<"\t"<<endl;
	cout<<"Gpa is "<<gpa<<"\t"<<endl;
	cout<<"quiz taken ="<<"\t"<<quiztaken<<endl;
	for(int i=0;i<quizcap;i++)
	{
		cout<<"Score of quizes are :"<<i+1<<"\t"<<quizescore[i]<<endl;
	}
	if(q==1){
		cout<<"Memmory is full not enough space :  "<<endl;
	}
//	cout<<"Copy constructor is invoked :";
}
student::~student()
{
	if (quizescore!=nullptr){
		delete[] quizescore;
	cout<<"Destructor "<<endl;
	}
}
bool student::compare(student s)
{
	bool flag = false;

	if(s.gpa>gpa)
	{
		return true;
	}
	else
		return false;
	//cout<<"Comparison function is invoked :"<<endl;
}
void student:: update(int a, float b)
{
	if(a<=quiztaken)
	{
		quizescore[a-1]=b;
	}
	else
		cout<<"the quiz was not taken"<<endl;
}








