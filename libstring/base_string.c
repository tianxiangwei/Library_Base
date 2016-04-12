/*
 * =====================================================================================
 *
 *       Filename:  base_string.c
 *
 *    Description:  base operation as string
 *
 *        Version:  1.0
 *        Created:  04/11/2016 04:41:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiangwei.tian (), tianxiangwei@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include "base_string.h"
/************************************
Function:squeeze
Description:剔除字符串中的特定字符
Input: char s[]:待处理字符产  char c：特定字符
Output:char s[]:处理后字符串
Return:char * 处理后字符串指针
Others:
************************************/
char * squeeze(char s[],char c)
{
	int i=0,j=0;
	while(s[i])
	{
		if(s[i]!=c)
			s[j++]=s[i];
		i++;	
	}
	s[j]='\0';
	return s;
}


/************************************
Function:string_lower
Description:字符串中字符小写
Input:char s[]:待处理字符串
Output:char s[]:处理后字符串
Return:char * 处理后字符串指针
Others:
************************************/
char * string_lower(char s[])
{
	int i=0;
	while(s[i])
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
		i++;
	}
	return s;
}

/************************************
Function:string_upper
Description:字符串中字符大写
Input:char s[]:待处理字符串
Output:char s[]:处理后字符串
Return:char * 处理后字符串指针
Others:
 ************************************/
char * string_upper(char s[])
{
	int i=0;
	while(s[i])
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]-=32;
		i++;
	}
	return s;
}
