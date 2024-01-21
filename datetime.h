#include<iostream>
#include<cmath>
#include <ctime>
#include<conio.h>
#include"antheaderPlusPlus.h"
using namespace std;
void date()
{
	time_t t = time(NULL);
 	tm* tPtr = localtime(&t);
     foreColor(2);cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
     foreColor(4);cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
     cout << endl;
}

