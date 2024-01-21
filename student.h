#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include"antheaderPlusPlus.h"
using namespace std;
class Student {
	public:
		int id,age;
		char name[30];
		char sex[5];
		char day[4],month[15],year[10];
		char room[10];
		float english,database,datacom,ca;
		double average,total;
		char grade;
	public:
		// Member Function
		void showData()
		{
			cout << "\n     "  << left << setw(15) << id << setw(30) << name << setw(10) << sex << right << setw(18) << age << setw(20) << room << 
							setw(20) << day << "-" <<setw(2) << month << "-" << setw(3) << year << endl;
		}
		void showScore()
		{
			cout << fixed << setprecision(2);
			cout << "\n     "  << left << setw(15) << id <<setw(30) << name <<setw(10) <<sex <<right <<setw(13)
							<<english << setw(14) << database << setw(16)<<datacom<<setw(14)<<ca<<endl;
		}
		void showGrade()
		{
			cout << fixed << setprecision(2);
			cout << "\n     " << left << setw(15) << id <<setw(30) << name <<setw(10)<<sex <<right << setw(11)
							<<total <<setw(18)<<average<<setw(26)<<getgrade()<<endl;
		}
		static void HeaderGrade()
		{
			gotoxy(50,2);cout<<"Views Student Grade";
			cout << "\n   "<< "============================================================================================================================";
			cout << "\n   "<< left <<setw(15)<<"Student ID"<<setw(30)<<"Student Name"<<setw(10)<<"Sex"<<right<<setw(13)
							<<"Total Score"<<setw(24)<<"Average Score"<<setw(22)<<"Grade";

			
			cout << "\n   "<< "============================================================================================================================";
		}
		static void HeaderScore()
		{
			gotoxy(50,2);cout<<"Views Student Score";
			cout << "\n   "<< "============================================================================================================================";
			cout << "\n   "<< left <<setw(15)<<"Student ID"<<setw(30)<<"Student Name"<<setw(10)<<"Sex"<<right<<setw(15)
							<<"English Score"<<setw(17)<<"Database Score"<<setw(19)<<"Datacom Score"
							<<setw(8)<<"CA";
			
			cout << "\n   "<< "============================================================================================================================";
		}
		static void Header()
		{
			gotoxy(50,2);cout<<"Views Information";
			cout << "\n   "<< "============================================================================================================================";
			cout << "\n     " << left << setw(15) << "Student ID" << setw(30) << "Student Name" << setw(15) << "Student Sex" << right << setw(18) << "Student Age"
							<< setw(20)<<"Student Classroom" << setw(23) << "Date of Birth";
		    cout << "\n   " << "============================================================================================================================\n";
		}
		static void Footer()
		{
			  cout << "\n   "  << "_____________________________________________________________________________________________________________________________\n";
		      
		}
		void input()
		{
			cout << "\n\t\t\t________Add Student Info______\n";
			cout << "\n\t\t\tStudent  ID        : " << (id = id + 1 ) << endl;fflush(stdin); 
			cout << "\n\t\t\tStudent  Name      : "; cin.get(name, 30); fflush(stdin);
			cout << "\n\t\t\tStudent  Sex       : "; cin.get(sex, 5); fflush(stdin);
			cout << "\n\t\t\tStudent  Age       : "; cin>>age;fflush(stdin);cin.clear();
//			for(int i=0;i<10;i++)
//			{
//				cout << "\n\t\t\tStudent  Birthday  : "; cin.get(birthday, 30); fflush(stdin);
//			}
			cout << "\n\t\t\tDate of birth      : "; cin.get(day,5); fflush(stdin);
			gotoxy(47,wherey()-1);	cout<<"-";
			cin.get(month,15);fflush(stdin);
			gotoxy(50,wherey()-1);	cout<<"-";
			cin.get(year,10);fflush(stdin);
			//gotoxy(57,wherey()-1);cout<<"\\";
			cout << "\n\t\t\tStudent  Classroom : "; cin.get(room, 10); fflush(stdin);
			cout << "\n\t\t\tEnglish  Score     : "; cin>>english;fflush(stdin);
			cout << "\n\t\t\tDatabase Score     : "; cin>>database;fflush(stdin);
			cout << "\n\t\t\tDatacom  Score     : "; cin>>datacom;fflush(stdin);
			cout << "\n\t\t\tCA       Score     : "; cin>>ca;fflush(stdin);
			
		}
		void edit()
		{
			cout << "\n\t\t\t________Edit Student Info______\n";
			//cout << "\n\t\t\tStudent ID        : "; cin>>id; fflush(stdin); cin.clear();
			cout << "\n\t\t\tStudent Name      : "; cin.get(name, 30); fflush(stdin);
			cout << "\n\t\t\tStudent Sex       : "; cin.get(sex, 5); fflush(stdin);
			cout << "\n\t\t\tStudent Age       : "; cin>>age;fflush(stdin);cin.clear();
			cout << "\n\t\t\tDate of birth      : "; cin.get(day,5); fflush(stdin);
			gotoxy(47,wherey()-1);	cout<<"-";
			cin.get(month,15);fflush(stdin);
			gotoxy(50,wherey()-1);	cout<<"-";
			cin.get(year,10);fflush(stdin);
			cout << "\n\t\t\tStudent Classroom : "; cin.get(room, 10); fflush(stdin);
//			cout << "\n\t\t\tEnglish  Score    : "; cin>>english;
//			cout << "\n\t\t\tDatabase Score    : "; cin>>database;
//			cout << "\n\t\t\tDatacom  Score    : "; cin>>datacom;
//			cout << "\n\t\t\tCA       Score    : "; cin>>ca;	
			//cout << "\n\t\t\tStudent Address      : "; cin.get(location, 30); fflush(stdin);	
		}
		void editScore()
		{
			cout << "\n\t\t\t\t\t________Edit Student Score______\n";
			cout << "\n\t\t\t\t\tEnglish  Score    : "; cin>>english;
			cout << "\n\t\t\t\t\tDatabase Score    : "; cin>>database;
			cout << "\n\t\t\t\t\tDatacom  Score    : "; cin>>datacom;
			cout << "\n\t\t\t\t\tCA       Score    : "; cin>>ca;
		}
		char getgrade()
		{
			total = english+database+datacom+ca;
			average = total/4;
				if(average>=100)
				grade='A';
			else if(average>=85)
				grade='B';
			else if(average>=65)
				grade='C';
			else if(average>=55)
				grade='D';
			else if(average>=40)
				grade='E';
			else if(average<20)
				grade='F';
			return grade;	
		} 
};
//-------------------------------------------------------------------------------------------------------
// Object of Class Product
Student stu;
// Object Stream
fstream file;// read, write,...
int readLastidInFile()
{
	ifstream reader;
	int Lastid;
	reader.open("StudentRecords.bin", ios::in | ios::binary);

	if(reader.fail()) Lastid = 0;
	if(reader.good())
	{
		
		/* First Stream */
 	   reader.read((char*)&stu, sizeof(stu));
		// Condition
		while(reader.eof() != true)
		{
		
             Lastid = stu.id;
     
 	       reader.read((char*)&stu, sizeof(stu));
		}//end while
					
	}
	reader.close();
	
	return Lastid;
}

void sortAsc(Student arr[], int N)
{
   for(int r = 1; r<=N-1; r++)
   {
   		Student tmp; 
	  	for(int e = 0; e<N-r; e++)
		{
			// sort 
			if(arr[e].id >arr[e+1].id )
			{
				tmp = arr[e];
				arr[e] = arr[e+1];
				arr[e+1] = tmp;
			}
		}
   }
	
}
//-------------------------------------------------------------------------------------------------------
void Insert()
{
	
	stu.id = readLastidInFile();
	file.open("StudentRecords.bin", ios::out | ios::app | ios::binary);	
		
	
	stu.input();
	
	file.write((char*)&stu, sizeof(stu));

	file.close();
}
//-------------------------------------------------------------------------------------------------------
void Views()
{
	
	file.open("StudentRecords.bin", ios::in | ios::out | ios::binary);
	

	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
	
		Student::Header();
	
 	   file.read((char*)&stu, sizeof(stu));
	
		while(file.eof() != true)
		{
		
             stu.showData();
			
 	       file.read((char*)&stu, sizeof(stu));
		}
		Student::Footer();
			
	}
	file.close();	
}
//-------------------------------------------------------------------------------------------------------
void Viewscore()
{
	file.open("StudentRecords.bin", ios::in | ios::out |ios::binary);
	if(file.fail()) cout << "\nFile was not found!!" << endl;
	
	if(file.good())
	{
		Student::HeaderScore();
		file.read((char*)&stu,sizeof(stu));
		
		while(file.eof() != true)
		{
			stu.showScore();
			file.read((char*)&stu,sizeof(stu));
		}
		Student::Footer();
	}
	file.close();
	
	
}
void ViewGrade()
{
	file.open("StudentRecords.bin", ios::in | ios::out |ios::binary);
	if(file.fail()) cout << "\nFile was not found!!" << endl;
	
	if(file.good())
	{
		Student::HeaderGrade();
		file.read((char*)&stu,sizeof(stu));
		
		while(file.eof() != true)
		{
			stu.showGrade();
			file.read((char*)&stu,sizeof(stu));
		}
		Student::Footer();
	}
	file.close();
	
	
}
//  Sort Data in File
void readAsc()
{
	
	int MAX_N = readLastidInFile();
	Student arrPro[MAX_N];
	int index = 0;
	
		file.open("StudentRecords.bin", ios::in | ios::binary);
	
		if(file.fail()) cout << "\nFile was not found!!" << endl;
		// Found
		if(file.good())
		{
		
	 	   file.read((char*)&stu,sizeof(stu));
			while(file.eof() != true)
			{
				
	             arrPro[index] = stu;
	             index++;
			
	 	       file.read((char*)&stu, sizeof(stu));
			}
				
		}
		
	sortAsc(arrPro, MAX_N);
	ofstream writer;
	writer.open("StudentRecords.bin", ios::out | ios::binary);
	
	for(int i = 0; i<MAX_N; i++)
	{
		writer.write((char*)&arrPro[i], sizeof(Student));
	}	
	writer.close();
	Views();
}
void Search()
{
	file.open("StudentRecords.bin", ios::in | ios::binary);
	
	

	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
		int searchByid;
		bool isFound = false;
		cout << "\nEnter student id you want to search : "; cin>>searchByid; fflush(stdin); cin.clear();
		
 	   file.read((char*)&stu, sizeof(stu));
		while(file.eof() != true)
		{
             
             if(searchByid == stu.id)
             {
             	 Student::Header();
             	 stu.showData();
             	 Student::Footer();
             	 isFound = true;
             	 break;
			 }	 
			
 	       file.read((char*)&stu, sizeof(stu));
		}
		if(isFound == false) cout << "\n\n\t\t\t\t\tERROR: Student id is invalid!!" << endl;			
	}

	file.close();	
}
void Searchname()
{
	file.open("StudentRecords.bin", ios::in | ios::binary);
	
	

	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
		char searchByname[20];
		bool isFound = false;
		cout << "\nEnter student name you want to search : "; cin.get(searchByname,20); fflush(stdin); cin.clear();
		
 	   file.read((char*)&stu, sizeof(stu));
		while(file.eof() != true)
		{
             
             if(strstr(stu.name,searchByname) != NULL)
             {
             	 Student::Header();
             	 stu.showData();
             	 Student::Footer();
             	 isFound = true;
             	 break;
			 }	 
			
 	       file.read((char*)&stu, sizeof(stu));
		}
		if(isFound == false) cout << "\n\n\t\t\t\t\tERROR: Student id is invalid!!" << endl;			
	}

	file.close();	
}
//-------------------------------------------------------------------------------------------------------
void Update()
{
	file.open("StudentRecords.bin", ios::out| ios::in | ios::binary);
	
	// Not Found
	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
		int updateByid;
		bool isFound = false;
		cout << "\nEnter student id you want to update : "; cin>>updateByid; fflush(stdin); cin.clear();
 	   file.read((char*)&stu, sizeof(stu));
		// Condition
		while(file.eof() != true)
		{
             
             if(updateByid == stu.id)
             {
             	int lastRead = file.tellg();
             	// input new data to object on memory
             	stu.edit();       
             	
             	// set position for writing( Start position )
             	file.seekp(lastRead-sizeof(stu));
             	
             	// write again to file
             	file.write((char*)&stu, sizeof(stu));
             	
             	isFound = true;
             	
			 }	 
			
 	       file.read((char*)&stu,sizeof(stu));
		}
		if(isFound == false) cout << "\n\n\t\t\t\t\tERROR: Student id is invalid!!" << endl;
					
	}
	file.close();	
}
void UpdateScore()
{
	file.open("StudentRecords.bin", ios::out| ios::in | ios::binary);
	
	// Not Found
	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
		int updateByid;
		bool isFound = false;
		cout << "\nEnter student id you want to update : "; cin>>updateByid; fflush(stdin); cin.clear();
 	   file.read((char*)&stu, sizeof(stu));
		// Condition
		while(file.eof() != true)
		{
             
             if(updateByid == stu.id)
             {
             	int lastRead = file.tellg();
             	// input new data to object on memory
             	stu.editScore();       
             	
             	// set position for writing( Start position )
             	file.seekp(lastRead-sizeof(stu));
             	
             	// write again to file
             	file.write((char*)&stu, sizeof(stu));
             	
             	isFound = true;
             	
			 }	 
			
 	       file.read((char*)&stu,sizeof(stu));
		}
		if(isFound == false) cout << "\n\n\t\t\t\t\tERROR: Student id is invalid!!" << endl;
					
	}
	file.close();	
}
//-------------------------------------------------------------------------------------------------------
void Delete()
{
	ofstream backup;
	
	file.open("StudentRecords.bin", ios::in | ios::binary);
	backup.open("TempFile.bin", ios::out | ios::binary);
	if(file.fail()) cout << "\nFile was not found!!" << endl;
	// Found
	if(file.good())
	{
		int deleteByid;
		bool isFound = false;
		cout << "\nEnter product id you want to delete : "; cin>>deleteByid; fflush(stdin); cin.clear();
		
 	   file.read((char*)&stu, sizeof(stu));
		while(file.eof() != true)
		{
		
             
             if(deleteByid == stu.id)
             {	
          	     isFound = true; 	
			 }	
			 
	         if(deleteByid != stu.id)
             {	
          	     // backup data	
          	     backup.write((char*)&stu, sizeof(stu));
			 }	 
		
 	       file.read((char*)&stu, sizeof(stu));
		}
		if(isFound == false)
		{
			//foreColor(4); 
			cout << "\n\n\t\t\t\t\tERROR: Student id is invalid!!" << endl;
        }
		if(isFound == true)
		{
			//foreColor(7); 
			cout << "\n\n\t\t\t\t\tRecord is deleted successfully..." << endl;
	   } 
		//foreColor(8);
					
	}
	file.close();
	backup.close();
	remove("StudentRecords.bin");
	rename("TempFile.bin", "StudentRecords.bin");	
}
//-------------------------------------------------------------------------------------------------------

