#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
//----------------------------------------------
char* hidePassword(char* password)
{
	char key;
	int index = 0;
	while(1)
	{
		key = getch();
		
		if(key == 13)//Key Enter
		{
			break;
		}
		else if(key == 9 || key == 32)// Key Tap OR key space
		{
			continue;
		}
		else if(key == 8)// key backspace
		{
			if(index>0)
			{
			    cout << "\b \b";
			    index--;
			    password[index] = '\0';// empty
			}	
			
		}
		else
		{
			cout << "*";
			
			password[index] = key; 
			index++;
		}
	}
	
	// end of char array
	password[index] = '\0';
	
	return password;
}


