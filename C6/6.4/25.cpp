// 25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{

	 int a[11]={5,8,11,13,17,18,25,28,69,75};
	 int temp,i=0,j=0;
     scanf("%d",&temp);
	for(i=9;i>=0;i--)
    {
       if(temp<a[i]){
            a[i+1] = a[i];
       }else{
             a[i+1] = temp;
             break;      
       }
    }
    for(i=0;i<11;i++)
    {
        printf("%d\t",a[i]);              
     }
    return 0;
}

