#include<stdio.h>
#include<limits.h>
struct details
{

    int droptime;
    int pickuptime;
    int pickuploc;
    int droploc;
    int money_earned;
    int time_travelled;
    int customer_id;
}details[4][20];
struct booking
{
    int customer_id;
    int pickuploc;
    int droploc;
    int pickuptime;
}booking[100];
static int inc,taxi1,taxi2,taxi3,taxi4,t1,t2,t3,t4,recentt1=1,recentt2=1,recentt3=1,recentt4=1,totalt1=0,totalt2=0,totalt3=0,totalt4=0;
void book()
{
    int min=INT_MAX;
printf("\n customer id\n");
scanf("%d",&booking[inc].customer_id);
printf("\n pickup location\n");
scanf("%d",&booking[inc].pickuploc);

printf("\n drop location\n");
scanf("%d",&booking[inc].droploc);
printf("\n pickup time\n");
scanf("%d",&booking[inc].pickuptime);
int select1=0,select2=0,select3=0,select4=0,select,total=INT_MAX;

if(taxi1==0)
{
    if(abs(recentt1-booking[inc].pickuploc)<min)
        {
        min=abs(recentt1-booking[inc].pickuploc);
        total=totalt1;
    select=1;

        }




}
if(taxi2==0)
{
    if(abs(recentt2-booking[inc].pickuploc)<min)
        {
        min=abs(recentt2-booking[inc].pickuploc);
    select=2;
 total=totalt2;
        }
         else
            if(abs(recentt2-booking[inc].pickuploc)==min)
          {
              if(totalt2<total)
              {
                  totalt2=total;
                  select=2;
              }
          }

}
if(taxi3==0)
{
    if(abs(recentt3-booking[inc].pickuploc)<min)
        {
        min=abs(recentt3-booking[inc].pickuploc);
    select=3;
     total=totalt3;

        }
         else
            if(abs(recentt3-booking[inc].pickuploc)==min)
          {
              if(totalt3<total)
              {
                  totalt3=total;
                  select=3;
              }
          }

}
if(taxi4==0)
{
    if(abs(recentt4-booking[inc].pickuploc)<min)
        {
min=abs(recentt4-booking[inc].pickuploc);
    select=4;
     total=totalt4;

        }
         else
            if(abs(recentt4-booking[inc].pickuploc)==min)
          {
              if(totalt4<total)
              {
                  totalt4=total;
                  select=4;
              }
          }

}
if(select==1)
    select1=1;
else
    if(select==2)

{
    select2=1;
}
else
    if(select==3)

{
    select3=1;
}

else
    if(select==4)

{
    select4=1;
}
//printf("%d taxi 2 %d",taxi2,select2);
//printf("%d is second val",select2);
if(taxi1==0 && select1)
{
    taxi1=abs(booking[inc].pickuploc-booking[inc].droploc);
    int money;
    if(taxi1>5)
    {
         money=5*10+(taxi1-5)*5;
    }
    else
    {
        money=taxi1*10;
    }
    totalt1=totalt1+money;

    details[0][t1].money_earned=money;
    details[0][t1].droploc=booking[inc].droploc;
    details[0][t1].pickuploc=booking[inc].pickuploc;
    details[0][t1].pickuptime=booking[inc].pickuptime;
    details[0][t1].droptime=booking[inc].pickuptime+taxi1;
    details[0][t1].customer_id=booking[inc].customer_id;
    recentt1= details[0][t1].droploc;
    printf("taxi 1 on the way");
   t1++;
     printf("\n");




}

else if(taxi2==0 && select2)
{
    taxi2=abs(booking[inc].pickuploc-booking[inc].droploc);
 int money;
 printf("enter");
    if(taxi2>5)
    {
         money=5*10+(taxi2-5)*5;
    }
    else
    {
        money=taxi2*10;
    }
  totalt2=totalt2+money;

    details[1][t2].money_earned=money;
    details[1][t2].droploc=booking[inc].droploc;
    details[1][t2].pickuploc=booking[inc].pickuploc;
    details[1][t2].pickuptime=booking[inc].pickuptime;
    details[1][t2].droptime=booking[inc].pickuptime+taxi1;
    details[1][t2].customer_id=booking[inc].customer_id;
    recentt2= details[1][t2].droploc;
    printf("taxi 2 on the way");
    t2++;


}
else if(taxi3==0 && select3)
{
    taxi3=abs(booking[inc].pickuploc-booking[inc].droploc);
  int money;
    if(taxi3>5)
    {
         money=5*10+(taxi3-5)*5;
    }
    else
    {
        money=taxi3*10;
    }
      totalt3=totalt3+money;


    details[2][t3].money_earned=money;
    details[2][t3].droploc=booking[inc].droploc;
    details[2][t3].pickuploc=booking[inc].pickuploc;
    details[2][t3].pickuptime=booking[inc].pickuptime;
    details[2][t3].droptime=booking[inc].pickuptime+taxi1;
    details[2][t3].customer_id=booking[inc].customer_id;
      recentt3= details[2][t3].droploc;

    printf("taxi 3 on the way");
    t3++;


}
else if(taxi4==0 && select4)
{
    taxi4=abs(booking[inc].pickuploc-booking[inc].droploc);
      int money;
    if(taxi4>5)
    {
         money=5*10+(taxi4-5)*5;
    }
    else
    {
        money=taxi4*10;
    }
  totalt4=totalt4+money;

    details[3][t4].money_earned=money;
    details[3][t4].droploc=booking[inc].droploc;
    details[3][t4].pickuploc=booking[inc].pickuploc;
    details[3][t4].pickuptime=booking[inc].pickuptime;
    details[3][t4].droptime=booking[inc].pickuptime+taxi1;
    details[3][t4].customer_id=booking[inc].customer_id;
    printf("taxi 4 on the way");
      recentt4= details[3][t4].droploc;
    t4++;



}
else
    printf("all taxis busy");

printf("%d t1",recentt1);
printf("%d t2",recentt2);
printf("%d t3",recentt3);
printf("%d t4",recentt4);

inc++;

}
void view()
{
    int itr;
  printf("1st taxi");
for(itr=0;itr<t1;itr++)
{

     printf("\n");
     printf("money earned");
    printf("%d",details[0][itr].money_earned);
    printf("\n");
     printf("droploc");
    printf("%d",details[0][itr].droploc);
     printf("\n");
        printf("pickuploc");
    printf("%d",details[0][itr].pickuploc);
     printf("\n");
        printf("pickuptime");
    printf("%d",details[0][itr].pickuptime);
     printf("\n");
        printf("droptime");
    printf("%d",details[0][itr].droptime);
     printf("\n");
        printf("customer id");
    printf("%d",details[0][itr].customer_id);
     printf("\n");


}
printf("2nd taxi");
for(itr=0;itr<t2;itr++)
{

     printf("\n");
      printf("money earned");
    printf("%d",details[0][itr].money_earned);
    printf("\n");
     printf("droploc");
    printf("%d",details[0][itr].droploc);
     printf("\n");
      printf("pickuploc");
    printf("%d",details[0][itr].pickuploc);
     printf("\n");
      printf("pickuptime");
    printf("%d",details[0][itr].pickuptime);
     printf("\n");
      printf("droptime");
    printf("%d",details[0][itr].droptime);
     printf("\n");
    printf("customer id");
    printf("%d",details[0][itr].customer_id);
     printf("\n");

}
 printf("3rd taxi");
for(itr=0;itr<t3;itr++)
{

     printf("\n");
   printf("\n");
      printf("money earned");
    printf("%d",details[0][itr].money_earned);
    printf("\n");
     printf("droploc");
    printf("%d",details[0][itr].droploc);
     printf("\n");
      printf("pickuploc");
    printf("%d",details[0][itr].pickuploc);
     printf("\n");
      printf("pickuptime");
    printf("%d",details[0][itr].pickuptime);
     printf("\n");
      printf("droptime");
    printf("%d",details[0][itr].droptime);
     printf("\n");
    printf("customer id");
    printf("%d",details[0][itr].customer_id);
     printf("\n");


}
 printf("4th taxi");
for(itr=0;itr<t4;itr++)
{

     printf("\n");
   printf("\n");
      printf("money earned");
    printf("%d",details[0][itr].money_earned);
    printf("\n");
     printf("droploc");
    printf("%d",details[0][itr].droploc);
     printf("\n");
      printf("pickuploc");
    printf("%d",details[0][itr].pickuploc);
     printf("\n");
      printf("pickuptime");
    printf("%d",details[0][itr].pickuptime);
     printf("\n");
      printf("droptime");
    printf("%d",details[0][itr].droptime);
     printf("\n");
    printf("customer id");
    printf("%d",details[0][itr].customer_id);
     printf("\n");


}
printf("total money is %d %d %d %d",totalt1,totalt2,totalt3,totalt4);
}

int main()
{
    int option;
    while(1){
    printf("\nenter your option\n 1.BOOK \n 2.VIEW DETAILS \n 3.EXIT\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        book();
        break;
    case 2:
        view();
        break;
    case 3:
        return;
        break;
    }
    if(taxi1>0)
        taxi1--;
    if(taxi2>0)
        taxi2--;
    if(taxi3>0)
        taxi3--;
    if(taxi4>0)
        taxi4--;
    printf("taxi values are %d",taxi3);
    }
}
