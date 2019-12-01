// 95.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int a[3][3];
int main(int argc, char* argv[])
{
void switchArray(int a[3][3]);
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
switchArray(a);
	return 0;
}

void switchArray(int a[][3]){
    int newArray[3][3];
    int i,j;
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            newArray[j][i] = a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",newArray[i][j] );
        }
    printf("\n");
    }

}

