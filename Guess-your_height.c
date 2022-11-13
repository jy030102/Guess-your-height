#include <stdio.h>
#define jy_height 180
#define yw_height 177
#define jh_height 178


int main()
{

    int guess;
    int num;
    int lis = 0;



    printf("======리스트======\n1. 김정연\n");
    printf("n2. 서용원\n");
    printf("n3. 이지항\n");

    printf("시도 횟수를 설정하시오.(1~10) : ");
    scanf("%d", &lis);

    printf("번호를 선택하세요 :");
    scanf("%d", &num);

    if (num == 1)
    {
        while (1) {
            printf("정연이의 키는?: ");
            scanf("%d", &guess);

            if (guess < jy_height) {
                printf("업\n");
                lis = lis - 1;
                printf("남은 시도 회수 : %d\n", lis);
            }

            else if (guess == jy_height) {
                printf("정답!\n");
                lis = lis - 1;
                printf("당신은 %d 번 만에 성공하셨습니다.\n", lis);
                break;
            }

            else if (guess > jy_height) {
                printf("다운\n");
                printf("남은 시도 회수 : %d\n", lis);
            }
            if (lis == 0) {
                printf("시도 횟수 이내에 성공하지 못했습니다.\n");
                break;
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
                lis = lis - 1;
                printf("남은 시도 회수 : %d\n", lis);
            }

            else if (guess == yw_height) {
                printf("정답!\n");
                lis = lis - 1;
                printf("당신은 %d 번 만에 성공하셨습니다.\n", lis);
                break;
            }

            else if (guess > yw_height) {
                printf("다운\n");
                printf("남은 시도 회수 : %d\n", lis);
            }
            if (lis == 0) {
                printf("시도 횟수 이내에 성공하지 못했습니다.\n");
                break;
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
                lis = lis - 1;
                printf("남은 시도 회수 : %d\n", lis);
            }

            else if (guess == jh_height) {
                printf("정답!\n");
                lis = lis - 1;
                printf("당신은 %d 번 만에 성공하셨습니다.\n", lis);
                break;
            }

            else if (guess > jh_height) {
                printf("다운\n");
                printf("남은 시도 회수 : %d\n", lis);
            }
            if (lis == 0) {
                printf("시도 횟수 이내에 성공하지 못했습니다.\n");
                break;
            }
        }
    }
    return 0;
}