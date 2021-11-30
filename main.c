#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_mat.h"

int main (){
    char ans;
    int i,j;
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
    return 0;
}