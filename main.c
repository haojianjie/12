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
int sum=0;

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
            printf("qingshuruxueshengxingming:\n");
            scanf("%s",(arr[index].name));

            printf("qingshuruxueshengyuwenchengji\n");
            scanf("%d",&(arr[index].yuwen));

             printf("qingshuruxueshengshuxuechengji\n");
            scanf("%d",&(arr[index].shuxue));

            printf("qingshuruxueshengyingyuchengji\n");
            scanf("%d",&(arr[index].yingyu));

            index++;

            printf("tianjiawanchengdianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
         if(code == 2)
        {
            printf("shanchuxueshengchengji\n");
            if(index > 0)
            {
                index--;
                printf("shanchuxueshengchengji,dianjihuichejixu\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
            else
            {
                printf("wuxueshengxixin,shanchuxibai,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            
        }
         if(code == 3)
        {
            printf("suoyouxueshengchengjiruxia\n");
            for(int i = 0; i < index;i++)
            {
                printf("di %d dgexueshengdexingmingwei:%s,ywsjw:%d,sxcjw:%d,yycjw:%d\n",i+1,arr[i].name,arr[i].shuxue,arr[i].yingyu);

            }
            printf("\ndianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
         if(code == 4)
        {
            for(int i = 0; i < index; i++)
            {
                sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
                if(sum<180)
                {
                    printf("di%dmingxueshengchengjibujige\n",i+1,arr[i].name);
                }
            }
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
         if(code == 5)
        {
            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen < 60 && arr[i].shuxue <60 && arr[i].yingyu < 60)
                {
                    printf("di%dmingxuesheng%sdemeiyikebujige\n",i+1,arr[i].name);
                }
            }
            printf("shaixuanwancheng,dianjjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
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