/*************************************************************************
	> File Name: p2250_mark50.cpp
	> Author: GuoGuo
	> Mail: gch981213@gmail.com
	> Created Time: 2015年09月11日 星期五 16时05分05秒
 ************************************************************************/
//P2250的50分暴力枚举
#include<cstdio>
using namespace std;
int a,b;
int lista[]={0,1,2,3,4,5,6,7,8,9,9,10,10,10,10,10,10,10,10,10,10,10,11,11,11,11,11,11,11,11,11,11,11,12,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,13,13,14,14,14,14,14,14,14,14,14,14,14,15,15,15,15,15,15,15,15,15,15,15,16,16,16,16,16,16,16,16,16,16,16,17,17,17,17,17,17,17,17,17,17,17,18,18};
int listb[]={0,0,1,2,2,3,3,4,4,4,4,5,5,6,6,6,6,7,7,8,8,8,8,9,9,9,9,9,9,10,10,11,11,11,11,11,11,12,12,12,12,13,13,14,14,14,14,15,15,15,15,15,15,16,16,16,16,16,16,17,17,18,18,18,18,18,18,19,19,19,19,20,20,21,21,21,21,21,21,22,22,22,22,23,23,23,23,23,23,24,24,24,24,24,24,24,24,25,25,25,25};
int GCD(int a,int b){return b==0?a:GCD(b,a%b);}
int main()
{
        scanf("%d%d",&a,&b);
        int tmp=GCD(a,b);
        a/=tmp;
        b/=tmp;
        for(int i=100;i;i--)
        {
               if(b*listb[i]<=a*lista[i])
                {
                        printf("%d",i);
                        return 0;
                }
        }
        puts(">_<");
        return 0;
}
