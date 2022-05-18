#include <iostream>
#include <string>
using namespace std;

struct address
{
	string city;
	int b_no;
};

struct student
{

	int id;
	string name;
	int grades[3];
	double avg;
	address home;
};



void read(student x[],int s)
{ 
	for(int i=0;i<s;i++)
	{
		cout<<"Enter id then name ";
		cin>>x[i].id>>x[i].name;
		double sum=0;
		cout<<"Enter the grades ";
		for(int j=0;j<3;j++)
		{
			cin>>x[i].grades[j];
			sum+=x[i].grades[j];
		}
		x[i].avg=sum/3;
		cout<<"Enter city then building no. ";
		cin>>x[i].home.city>>x[i].home.b_no;
	}
}

void print(student x[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<x[i].id<<"\t"<<x[i].name<<"\t\t";
		for(int j=0;j<3;j++)
			cout<<x[i].grades[j]<<"  ";
		cout<<"\t"<<x[i].avg<<"\t\t"<<x[i].home.city<<"\t"<<x[i].home.b_no<<endl;
	}
}

double max_avg(student x[],int s)
{
	double max=x[0].avg;
	for(int i=1;i<s;i++)
		if(x[i].avg>max)
			max=x[i].avg;
	return max;
}

string lowest_grade(student x[],int s)
{
	int min=x[0].grades[0];
	for(int i=1;i<s;i++)
		{
			if(x[i].grades[0]<min)
			min=x[i].grades[0];
	return x[i-1].name;
	    }
}

int no_fail (student x[],int s)
{
	int fail=0;
	for (int d=0;d<s;d++)
		if(x[d].grades[1]<5)
			fail++;

	return fail;
}

student cia(student x[],int s)
{
	for (int i=0;i<s;i++)
	if(x[i].home.city=="amman")
	{
       break;
	}
	return x[i];
}

void main()
{
	student s[5];
	read(s,3);
	cout<<"Id\tName\t\tGrades\t\tAvg\t\tAddress\n";
	print(s,3);
	cout<<"The heigest avg is "<<max_avg(s,3)<<endl;
	cout<<"The student with lowest grade is "<<lowest_grade(s,3)<<endl;
	cout<<"The number of students who failed in grade 2 is : "<<no_fail(s,3)<<endl;
	cia (s,3)
}

//write function to
//1. return name of student with lowest grade 1
//2. count of students failed in grade 2 (assume it's of 10)
//3. return student information that live in amman