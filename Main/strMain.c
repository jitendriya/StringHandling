#include <stdio.h>
/*#include "xstrlen.h"
#include "../inc/xstrcat.h"
#include "../inc/xstrcmp.h"
#include "../inc/xstrcpy.h"*/
int main(int argc,char *argv[])
{
	char string1[20] = "CProgram";
	char string2[40] = "Let Us C Programming  and";
	char string3[20] = "trim    trim   ";
	printf("\n string2:%s",string2);
	xstrsplit(string2);
	/*int result,length1 = 0,length2 = 0;
	//string1 = "Cprogramming";
	//string2 = "StringHandling";
	printf("\n String1 :%s" ,string1);
	length1 = xstrlen(string1);
	printf("\nstring1 length :%d" ,length1);
	printf("\n String2 : %s",string2);
	length2 = xstrlen(string2);
	printf("\nstring2 length : %d",length2);
	//xsubstr(string1,3,8);

	xstrrev(string2);
	printf("\n reversed string :%s",string2);
	xstrcat(string1,string2);
	printf("\nAfter Concatenation :%s",string1);
	result = xstrcmp(string1,string2);
	printf("\ncomapre result : %d",result);
	//xsubstr(string1,3,8);
	xstrcpy(string1,string2);
	printf("\nAfter Copy");
	printf("\nstring1:%s\tstring2:%s",string1,string2);	
	xsubstr(string1,1,5);
	xstrtrim(string3);
	printf("\n trimmed string:%s",string3);*/
	return 0;
}
