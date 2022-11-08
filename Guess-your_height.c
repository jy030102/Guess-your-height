#include <stdio.h>
#define jy_height 180
#define yw_height 177
#define jh_height 178


int main()
{

    int guess;
    int num;
 
    printf("======리스트======\n1. 김정연\n");
    printf("n2. 서용원\n");
    printf("n3. 이지항\n");
    
    printf("번호를 선택하세요 :");
    scanf("%d", &num);

    if (num == 1)
    {
        while (1) {
            printf("정연이의 키는?: ");
            scanf("%d", &guess);

            if (guess < jy_height) {
                printf("업\n");
            }

            else if (guess == jy_height) {
                printf("정답!\n");
                break;
            }

            else if (guess > jy_height) {
                printf("다운\n");
            }
        }
    }
    else if (num == 2) 
    {
        while (1) {
            printf("용원이의 키는?: ");
            scanf("%d", &guess);

            if (guess < yw_height) {
                printf("업\n");
            }

            else if (guess == yw_height) {
                printf("정답!\n");
                break;
            }

            else if (guess > yw_height) {
                printf("다운\n");
            }

        }
    }
    }
    else if (num == 3)
    {
        while (1) {
            printf("지항이의 키는?: ");
            scanf("%d", &guess);

            if (guess < jh_height) {
                printf("업\n");
            }

            else if (guess == jh_height) {
                printf("정답!\n");
                break;
            }

            else if (guess > jh_height) {
                printf("다운\n");
            }
        }
     }
    return 0;
}
