#include <stdio.h>
#define jy_height 180

int main()
{

    int guess_jy;
 
        printf("======리스트======\n1. 김정연\n");

    while (1) {


        printf("정연이의 키는?: ");
        scanf("%d", &guess_jy);

        if (guess_jy < jy_height) {
            printf("업\n");
          
        }

        else if (guess_jy == jy_height) {
            printf("정답!\n");
        
            break;
        }

        else if (guess_jy > jy_height) {
            printf("다운\n");

          
        }

    }



    return;
}
