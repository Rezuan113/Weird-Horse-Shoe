#include<stdio.h>
int main()
{
    int s1,s2,s3,s4;
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    if(s1==s2 && s2==s3 &&s3==s4){
        printf("3");
    }
    else if((s1==s2 && s2==s3) || (s2==s3 && s3==s4) || (s1==s3  && s1==s4) || (s1==s2 && s2==s4)){
        printf("2");
    }
    else if((s1==s2)||(s2==s3)||(s3==s4)||(s1==s3)||(s1==s4)||(s2==s4)){
        printf("1");
    }
    return 0;

}
