#include <stdio.h>
#include <stdlib.h>

int main()
{
            srand(time(NULL));
int i,x=0,sc=0,b=0,p=0,j,l=0,y;
int score=0,balls=0;
int blls=0,a=0,scr=0,scores=0;
int s,pak=0,ind=0;

     printf("Teams PAK and  IND ready  for match\n");
        for(s=1;s<6;s++)
        {
            printf("   players\tscores\t  balls\n");
         for(x=1;x<=120;x++)
          {     i=rand()%6+1;

                balls++;
                b++;

            if(i!=5)
             {   sc=sc+i;
             score=score+i;
             }



                           if(i==5)

                        {
                           p=p+1;

                           printf("player:%d\t%d\t%d\n",p,sc,balls);
                           sc=0;
                           balls=0;
                        if(p==10)
                        {
                            break;
                        }
                       }
          }
                        printf("team PAKISTAN\n\n");
                        printf("total score:%d\n",score);
                        printf("total balls:%d\n\n",b);


    for(y=1;y<=120;y++)
    {

           j=rand()%6+1;

            blls++;
            a++;
              if(j!=5)
         {  scr=scr+j;
         scores=scores+j;
         }


                if(j==5)
                       {
                           l=l+1;

                        printf("player:%d\t%d\t%d\n",l,scr,blls);


                        scr=0;
                        blls=0;

                        if(l==10)
                        {
                            break;
                        }
                       }
                       }
                        printf("team INDIA\n\n");
                        printf("total score:%d\n\n",scores);
                        printf("total balls :%d\n\n\n",a);
                        printf("*****************\n");

                        if(score>scores)
                        {
                            printf("*****RESULT \t MATCH:%d*****\n",s);
                        printf("*******TEAM PAKISTAN WON*******\n\n*****************************************************************\n");
                        pak++;
                        }
                        if(score<scores)
                        {  printf("RESULT\t MATCH:%d\n",s);

                           printf("*******TEAM INDIA WON*******\n\n\n****************************************************************\n");
                          ind++;
                          }

                        x=0,sc=0,b=0,p=0,l=0;
                        score=0,balls=0;
                         blls=0,a=0,scr=0,scores=0;
                         }




    if(pak>ind)
     {
         printf("*****SERIES  RESULT*****\n\nPAKISTAN won T20 series of 5 matches by:%d-%d\n\n",pak,ind);
     }
     if(pak<ind)
     {
         printf("*****SERIES  RESULT*****\n\nINDIA won T20 series of 5 matches by:%d-%d:\n\n",ind,pak);
     }



    return 0;
}
