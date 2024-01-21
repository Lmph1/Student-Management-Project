#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include"antheaderPlusPlus.h"
#include "AboutHidePassword.h"
#include"student.h"
#include"datetime.h"
using namespace std;
void display();
void schedule();
void display2(string name,int location_X_string,int location_Y_string)
{
	int i=0;
	
	while(!kbhit())
	{
		int X=location_X_string;
		gotoxy(X-5,location_Y_string);
		cout<<"                                                                           ";
		gotoxy(X,location_Y_string);
		foreColor(i++);
		cout<<"<<<"<<name<<">>>";
		delay(500);
		gotoxy(X--,location_Y_string);
		foreColor(i++);
		cout<<"<<<<"<<name<<">>>>";
		delay(500);
		gotoxy(X--,location_Y_string);
		foreColor(i++);
		cout<<"<<<<<"<<name<<">>>>>";
		delay(500);
		gotoxy(X--,location_Y_string);
		foreColor(i++);
		cout<<"<<<<<<"<<name<<">>>>>>";
		delay(500);
		gotoxy(X--,location_Y_string);
		foreColor(i++);
		cout<<"<<<<<<<<"<<name<<">>>>>>>>";
		gotoxy(X--,location_Y_string);
		foreColor(i++);
		cout<<"<<<<<<<<<"<<name<<">>>>>>>>>";
		if(i>10)
		{
			i=0;
		}
		
	}
	getch();
}
void login();
void Menu();
void FirstMenu();
void welcome();
int main()
{
	system("MODE CON COLS=130");
	//date();
	//display();
	//welcome();
	display2("PRESS ANYKEY TO CONTINUE",40,15);
	login();
	//Menu();
	
	getch();
	return 0;
}
void welcome()
{
	system("color 0c");
	cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
	char a=177, b=219;
	cout<<"\t\t\t\t";
	for (int i=0;i<=20;i++)
	cout<<a;
	cout<<"\r";
	cout<<"\t\t\t\t";
	for (int i=0;i<=20;i++)
	{
		cout<<b;
	  	for (int j=0;j<=1e8;j++); 
	}
//	system("cls");
//	system("color 0d");// 0 color in background screen and d color in fornt
//	cout<<"\n\n\n\t\t\tHELLO WORLD\n\n\t\t\tLoading made by Pheak :P";
	
	 //getch();
}
void  display()
{
	string st[]={"HELLO EVERYBODY:)","THIS IS MY FIRST PROJECT THAT IT CAN STORE DATA OF STUDENT","HMMMM... OK LET'S SEE IT TOGETHER:)"};
		for(int i=0;i<sizeof(st)/sizeof(string);i++)
		{
			for(int j=0;j<st[i].length();j++)
			{
				foreColor(4+i);
				gotoxy(20+j,5);
				cout<<st[i][j];
				delay(50);
			}
			delay(900);
			system("cls");
		}
	//	return 0;
}
void login()
{
	while(1)
	{
		cls();
		//____
		char username[25];
		char password[25];
	    //1.1. Box Header
	    DrawRectangle(25, 2, 60, 1, 8);
	    //1.2. Box title
	    foreColor(5); gotoxy(50, 3); cout << "LOGIN FORM";
	    //2.1. Box Body
	    DrawRectangle(25, 4, 60, 12, 8);
	    //2.2. Mini Box
	    drawBoxSingleLine(30, 6, 50, 1, 3);
	    drawBoxSingleLine(30, 9, 50, 1, 3);
	    //2.3. Message Mini Box
	    foreColor(0); gotoxy(30, 7);  cout << "Enter Username : ";
	    foreColor(0); gotoxy(30, 10); cout << "Enter Password : ";
	    //2.4. Input
	    foreColor(5); gotoxy(47, 7); cin>>username; fflush(stdin);
	    foreColor(5); gotoxy(47, 10); hidePassword(password);
	
		if(stricmp(username, "Pheak") == 0 && stricmp(password, "1234") == 0)
		{
			cls();
			foreColor(7);
			FirstMenu();
		}
		else if(stricmp(username, "Pheak") != 0 && stricmp(password, "1234") != 0)
		{
			foreColor(4); gotoxy(33, 14);
			cout << "ERROR: Username & Password are incorrectly!!";
		}
		else if(stricmp(username, "Pheak") != 0)
		{
			foreColor(4); gotoxy(40, 14);
			cout << "ERROR: Username is incorrectly!!";
		}
		else if(stricmp(password, "1234") != 0)
		{
			foreColor(4); gotoxy(40, 14);
			cout << "ERROR: Password is incorrectly!!";
		}
		
		//______
		Sleep(800);// delay()
	
		
	}// end while
}
void FirstMenu()
{
	int t,up;
	up:
		up1:
	cls();
	date();
	DrawRectangle(30, 2, 57, 13, 7);
 	foreColor(1);
 	gotoxy(40,4);cout << "=====================================";
 	foreColor(6);
 	gotoxy(40,5);cout << "________________Menu_________________";
 	foreColor(1);
 	gotoxy(40,6);cout << "=====================================";
 	foreColor(3);
 	gotoxy(40,7);cout  <<"            1.Student Information             ";
 	gotoxy(40,8);cout  <<"            2.Student Schedule           ";
 	gotoxy(40,9);cout  <<"            3.About Me   ";
 	gotoxy(40,10);cout  <<"            4.Exit program        ";
 	gotoxy(40,11);cout <<"______________________________________";
 	fflush(stdin);
 	printf("\n\t\t\t\t\t\tPlease select(1-4) : ");
 	scanf("%d",&t);fflush(stdin);
 	if(t==1)
 	{
 		cls();
 		Menu();
	}
	else if(t==3)
	{
		char ch;
		char key;
		//do
		//{
			cls();
		DrawRectangle(30, 2, 85, 13, 5);
		foreColor(2);gotoxy(65,1);cout<<"My Profile";
		foreColor(3);gotoxy(40,3);cout<<"My Name is  :  Choun Sopheak";
		foreColor(4);gotoxy(40,5);cout<<"Sex         :  Male";
		foreColor(5);gotoxy(40,7);cout<<"My Birthday : 24-Feb-2002";
		foreColor(6);gotoxy(40,9);cout<<"I'm Studying at Royal University of Phnom Penh";
		foreColor(7);gotoxy(40,11);cout<<"In my future I want to be a Programmer and Network Engineering";
		
		//foreColor(5);gotoxy(40,13);cout << "Press (n/N) to back menu : ";
		foreColor(8);cout << "\n\n\t\t\t\t\t <<<<< Press any key to back to [Menu] >>>>>"; 
		//ch = 
		getch();
		goto up;
		//getch();
		//break;
//		if(ch>='a' && 'z' || ch>='A' && ch<='Z' || ch>='1' && ch<='9')
//		{
//		
//			goto up;
//		}
		//}while(key !=27);
		
		
//		if(getch()=='n' || getch()=='N')
//		{
//		
//			goto up;
//		}
	}
	else if(t == 2)
	{
		cls();
		char key,ch;
		int up1;
		cls();
		gotoxy(55,2);cout<<"Student Schedule";
		
		DrawRectangle(20, 4, 90, 20, 6);
		drawBoxSingleLine(21, 5, 13, 1, 3);
		gotoxy(22,6);cout<<"Time AM/PM";
		//drawBoxSingleLine(21, 7, 12, 1, 3);
		drawBoxSingleLine(36, 5, 13, 1, 3);
		gotoxy(39,6);cout<<"Monday";
		drawBoxSingleLine(51, 5, 13, 1, 3);
		gotoxy(54,6);cout<<"Tuesday";
		drawBoxSingleLine(66, 5, 13, 1, 3);
		gotoxy(68,6);cout<<"Wednesday";
		drawBoxSingleLine(81, 5, 13, 1, 3);
		gotoxy(83,6);cout<<"Thursday";
		drawBoxSingleLine(96, 5, 13, 1, 3);
		gotoxy(99,6);cout<<"Friday";
//----------------------------------------------------
		drawBoxSingleLine(21, 8, 13, 1, 3);
		gotoxy(23,9);cout<<"7:00-8:30";
		drawBoxSingleLine(36, 8, 13, 1, 3);
		gotoxy(39,9);cout<<"English";
		drawBoxSingleLine(51, 8, 13, 1, 3);
		gotoxy(53,9);cout<<"Database";
		drawBoxSingleLine(66, 8, 13, 1, 3);
		gotoxy(68,9);cout<<"Data com";
		drawBoxSingleLine(81, 8, 13, 1, 3);
		gotoxy(86,9);cout<<"C++";
		drawBoxSingleLine(96, 8, 13, 1, 3);
		gotoxy(100,9);cout<<"CA";
//----------------------------------------------------------
		drawBoxSingleLine(21, 11, 13, 1, 3);
		gotoxy(23,12);cout<<"8:40-9:40";
		drawBoxSingleLine(36, 11, 13, 1, 3);
		gotoxy(40,12);cout<<"C++";
		drawBoxSingleLine(51, 11, 13, 1, 3);
		gotoxy(53,12);cout<<"Data com";
		drawBoxSingleLine(66, 11, 13, 1, 3);
		gotoxy(68,12);cout<<"Database";
		drawBoxSingleLine(81, 11, 13, 1, 3);
		gotoxy(86,12);cout<<"CA";
		drawBoxSingleLine(96, 11, 13, 1, 3);
		gotoxy(99,12);cout<<"English";
//-------------------------------------------------------------------
		drawBoxSingleLine(21, 14, 13, 1, 3);
		gotoxy(23,15);cout<<"9:50-10:50";
		drawBoxSingleLine(36, 14, 13, 1, 3);
		gotoxy(38,15);cout<<"Database";
		drawBoxSingleLine(51, 14, 13, 1, 3);
		gotoxy(55,15);cout<<"C++";
		drawBoxSingleLine(66, 14, 13, 1, 3);
		gotoxy(71,15);cout<<"CA";
		drawBoxSingleLine(81, 14, 13, 1, 3);
		gotoxy(84,15);cout<<"English";
		drawBoxSingleLine(96, 14, 13, 1, 3);
		gotoxy(98,15);cout<<"Database";
//-----------------------------------------------------------------------
		drawBoxSingleLine(21, 17, 13, 1, 3);
		gotoxy(22,18);cout<<"11:00-12:00";
		drawBoxSingleLine(36, 17, 13, 1, 3);
		gotoxy(38,18);cout<<"Data com";
		drawBoxSingleLine(51, 17, 13, 1, 3);
		gotoxy(53,18);cout<<"English";
		drawBoxSingleLine(66, 17, 13, 1, 3);
		gotoxy(68,18);cout<<"English";
		drawBoxSingleLine(81, 17, 13, 1, 3);
		gotoxy(83,18);cout<<"Database";
		drawBoxSingleLine(96, 17, 13, 1, 3);
		gotoxy(98,18);cout<<"Data com";
	//-----------------------------------------------------------
		drawBoxSingleLine(21, 20, 13, 1, 3);
		gotoxy(22,21);cout<<"12:30-1:00";
		drawBoxSingleLine(36, 20, 13, 1, 3);
		gotoxy(40,21);cout<<"CA";
		drawBoxSingleLine(51, 20, 13, 1, 3);
		gotoxy(55,21);cout<<"CA";
		drawBoxSingleLine(66, 20, 13, 1, 3);
		gotoxy(71,21);cout<<"C++";
		drawBoxSingleLine(81, 20, 13, 1, 3);
		gotoxy(83,21);cout<<"Data com";
		drawBoxSingleLine(96, 20, 13, 1, 3);
		gotoxy(100,21);cout<<"C++";
		
		foreColor(6);
		gotoxy(43,24);cout<<"<<<<< Press any key to back to [Menu] >>>>>"; 
		
		//ch = 
		getch();
		goto up1;
//		if(ch>='a' && 'z' || ch>='A' && ch<='Z' || ch>='1' && ch<='9')
//		{
//		
//			goto up1;
//		}
		
	}
	
	else if(t==4)
	{
		cls();
		foreColor(5);gotoxy(40,3);cout << "Good Bye and Thank You !!!";
		gotoxy(40,4);
		exit(0);
	}
}
void Menu()
{
	char key;
	// Condition
	while(1)
	{
		cls();
		cout << "\n\t\t\t\t\t===================================";
		cout << "\n\t\t\t\t\t          STUDENT MENUS            ";
		cout << "\n\t\t\t\t\t===================================";
		cout << "\n\t\t\t\t\t         1. Insert Student          ";
		cout << "\n\t\t\t\t\t         2. Views  Student          ";
		cout << "\n\t\t\t\t\t         3. Search Student          ";
		cout << "\n\t\t\t\t\t         4. Update Student          ";
		cout << "\n\t\t\t\t\t         5. Delete Student          ";  
		cout << "\n\t\t\t\t\t         6. Back to Menu                  ";
		cout << "\n\t\t\t\t\t___________________________________";       
		//____
		int option;
		cout << "\n\n\t\t\t\t\tPlease enter option above : "; cin>>option; fflush(stdin); cin.clear();
		
		// Condition
		if(option == 1)// 
		{
			do
			{
				cls();
			    	Insert();  
			    
			    cout << "\n\n\t\t <<<<< Press [ESC] to back to [MENUS] or any key to add [Record] again >>>>>"; key = getch();
			    
			}while(key !=27);
		}
		else if(option == 2) // 
		{
			int op,again;
			//cls();
			again:
			cls();
			//Views();
			cout<<"\n\n\n\t\t\t\t\t===================================";
			gotoxy(55,4);cout<<"Viwes";
			cout<<"\n\t\t\t\t\t===================================";
			//DrawRectangle(30, 2, 50, 10, 3);
			foreColor(3);
			gotoxy(42,7);cout<<"1. Views information of Student";
			foreColor(3);
			gotoxy(42,9);cout<<"2. Views Student Score";
			foreColor(3);
			gotoxy(42,11);cout<<"3. Views Student Grade";
			foreColor(3);
			gotoxy(42,13);cout<<"4. Back to Student Menus";
			gotoxy(40,15);cout<<"__________________________________________";
			foreColor(3);
			gotoxy(40,16);cout<<"Please enter numbers do you want to see(1/4) : ";cin>>op;
			if(op == 1)
			{
				cls();
				Views();
				gotoxy(45,22);cout<<"<<<<< Press any key to back to [Views] >>>>>";
				getch();
				
				goto again;
				break;
			}
			else if(op == 2)
			{
				cls();
				Viewscore();
				gotoxy(45,16);cout<<"<<<<< Press any key to back to [Views] >>>>>";
				getch();
				
				goto again;
				break;
			}
			else if(op == 3)
			{
				cls();
				ViewGrade();
				gotoxy(45,18);cout<<"<<<<< Press any key to back to [Views] >>>>>";
				getch();
				
				goto again;
				break;
			}
			else if(op == 4)
			{
				cls();
				Menu();
			}
			getch();	
			//cout << "\n\n\n\n\n\n\t\t\t\t <<<<< Press any key to back to [MENUS] >>>>>"; getch();
		}
		else if(option == 3) // 
		{
			
			do
			{
				cls();
				Search();
				cout<<"\n";	 
				   
                cout << "\n\n\t\t <<<<< Press [ESC] to back to [MENUS] or any key to add [Search] again >>>>>"; key = getch();
			    
			}while(key !=27);
//			int ch,start;
//				start:
//				cls();
//				cout<<"\n\n\n\t\t\t\t\t===================================";
//				gotoxy(50,4);cout<<"Seatch Information";
//				cout<<"\n\t\t\t\t\t===================================";	
//				foreColor(3);
//				gotoxy(42,7);cout<<"1. Search information of Student By ID";
//				foreColor(3);
//				gotoxy(42,9);cout<<"2. Search information of Student By Name";
//				foreColor(3);
//				gotoxy(40,10);cout<<"_______________________________________";
//				foreColor(3);
//				gotoxy(40,11);cout<<"Please enter search do you want to see(1/2) : ";cin>>ch;
//				if(ch == 1)
//				{
//					cls();
//					Search();
//					cout<<"\n";
//						
//					cout << "\n\n\t\t <<<<< Press [ESC] to back to [MENUS] or any key to add [Search] again >>>>>"; key = getch();
//						
//					goto start;
//					break;
//				}
//				else if(ch ==2)
//				{
//					cls();
//					Searchname();
//					cout<<"\n";
//					
//					goto start;
//					break;
//				}
		}
		else if(option == 4)// 
		{
			int op,rest;
			rest:
		   	cls();
			cout<<"\n\n\n\t\t\t\t\t=======================================";
			gotoxy(51,4);cout<<"Update Information";
			cout<<"\n\t\t\t\t\t=======================================";
			foreColor(3);
			gotoxy(44,7);cout<<"1. Update information of Student";
			foreColor(3);
			gotoxy(44,9);cout<<"2. Update Student Score";
			foreColor(3);
			gotoxy(44,11);cout<<"3. Back to Student Menus";
			gotoxy(42,12);cout<<"________________________________________";
			foreColor(3);
			gotoxy(42,13);cout<<"Please enter update do you want (1-3) : ";cin>>op;
			if(op == 1)
			{
				cls();
				Update();
				gotoxy(43,15);cout<<"<<<<< Press any key to back to [Update Information] >>>>>";
				getch();
				
				goto rest;
				break;
			}
			else if(op == 2)
			{
				cls();
				UpdateScore();
				gotoxy(40,15);cout<<"<<<<< Press any key to back to [Update Information] >>>>>";
				getch();
				
				goto rest;
				break;
			}
			else if(op == 3)
			{
				cls();
				Menu();
			}
			getch();
  	
		}
		else if(option == 5)// 
		{
		   do
			{
				cls();
			    Delete();	 
				   
                cout << "\n\n\t\t <<<<< Press [ESC] to back to [MENUS] or any key to add [Delete] again >>>>>"; key = getch();
			    
			}while(key !=27);
		}
		else if(option == 6)// 
		{
			cls();
			FirstMenu();
		}
			
		
	}// end while
	
}

