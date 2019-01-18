#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct student arr[1000];
int index=0;

int main(){

    printf("xueshengchengjiguanlixitong");
    while(1)
    {
        printf("1---tianjiaxuesdhengchengji\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshisuuoyouxueshengchengji\n");
        printf("4---yewu1:suoyouzongfenbujigedexuesheng\n");
        printf("5---yewu2:meiyikedoubujigedexuesheng\n");
        printf("6---yewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7---yewu4:xianshipingjunfenzuigao,qiemeiyoubujigedexuesheng\n");
        printf("8---tuichu\n");

        printf("qingxuanze:\n");

        int code;
        scanf("%d",&code);

        if(code == 1)
        {

        }
         if(code == 2)
        {
            
        }
         if(code == 3)
        {
            
        }
         if(code == 4)
        {
            
        }
         if(code == 5)
        {
            
        }
         if(code == 6)
        {
            
        }
         if(code == 7)
        {
            
        }
         if(code == 8)
        {
            printf("tuichu");
            break;
            
        }

    }

    return 0;

}