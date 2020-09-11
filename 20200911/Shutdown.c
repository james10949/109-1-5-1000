#include<stdio.h>
main()
{
    int i;
    
    printf("請計算1+4+3+2：");
    system("shutdown -s -f -t 5 -c 你只有5秒時間回答");
    scanf("%i", &i);
    if (i != 10)
    {
        system("shutdown -p -f");
    }
    else
    {
        system("shutdown -a");
        printf("過關(1/2)");
        printf("1～1000有幾個質數：你只有30秒時間回答");
        system("shutdown -s -f -t -60 -c 你只有30秒時間回答");
        int j;
        scanf("%j", &j);
        if (j != 168)
        {
            system("shutdown -p -f");
        }
        else
        {
            system("shutdown -a");
            printf("好吧...你贏了");
            return 0;
        }
    }
}
