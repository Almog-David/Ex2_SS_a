#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_mat.h"

void main (){
    char ans;
    int i,j;
    int matrix[10][10];
    while(ans!='D'){
        scanf ("%c",&ans);
        switch (ans)
        {
        case 'A':
            create();
            break;
        case 'B':
            scanf("%d%d",&i,&j);
            has_path(i,j);
            break;
        case 'C':
            scanf("%d%d",&i,&j);
            min_path(i,j);
            break;
        }
    }
}