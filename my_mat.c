#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_mat.h"

int matrix[10][10]={};
bool flag=false;
void create (){
    int temp=0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &temp);
            matrix[i][j]=temp;
        }

    }
    flag=false;
 }

void calculate (){
    for(int k=0; k<10; k++)
    {
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(matrix[i][j]==0 && matrix[i][k]!=0 && matrix[k][j]!=0)
                    matrix[i][j] = matrix[i][k]+matrix[k][j];
                else if(matrix[i][j]!=0 && matrix[i][k]!=0 && matrix[k][j]!=0)
                    matrix[i][j] = fmin(matrix[i][j] , matrix[i][k]+matrix[k][j]);
                else if(matrix[i][j]==0 && (matrix[i][k]==0 || matrix[k][j]==0))
                    matrix[i][j] = 0;
                if(i==j)
                    matrix[i][j] = 0;
            }
        }
    }
    flag=true;
}

void has_path (int i, int j){
    if(flag==false)
        calculate();
    if (matrix[i][j]!=0)
        printf("True\n");
    else
        printf("False\n");
}
     

void min_path (int i, int j){
    if(flag==false)
        calculate();
    if (matrix[i][j]!=0)
        printf("%d\n", matrix[i][j]);  
    else
        printf("%d\n",-1);
}
// void print ()
// {
//     for(int i =0; i < 10; i++)
//     {
//         for(int j =0; j < 10; j++)
//         {
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
// }