// 31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    void strcat(char a[],char b[])
	char a[100],b[100];
    gets(a);
    gets(b);
    strcat(a,b); 
    puts(a); 
    return 0;
}


void mystrcat(char a[],char b[]){
    int i=0,j=0;
    while(a[i++]!='\0'); 
    i++;
    while(b[j]!='\0'){ 
        a[i++]=b[j++];
    } 
    a[i]='\0'; 
}