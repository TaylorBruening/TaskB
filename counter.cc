#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include<iostream>

using namespace std;

typedef unsigned long count_t;
count_t ccount;
count_t lcount;

/* 
	@file DecadeView.jsx
	@brief allows user to view calendar by century, separated into 10 decades
	@author Taylor Bruening
*/



/*
	@brief
	@return
*/


void countLine(char *pName)
{
  FILE *fp = fopen (pName, "r"); //Opening the file

	while(!fp.eof())
		//count number of lines

cout<<"Number of lines "<<lcount<<endl;
}

/*
	@brief 
	@return
*/

void countChar(char *pName)
{
  FILE *fp = fopen (pName, "r"); //Opening the file

	while(!fp.eof())
		//count number of characters

cout<<"Number of characters "<<ccount<<endl;
}


int main (char **pName)
{
 //if fp doesn't open, send in "Ohio University to *pName
countChar(char *pName);

countLine(char *pName);


  return 0;
}
