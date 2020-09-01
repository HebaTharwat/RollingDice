#include <stdio.h>
#include <stdlib.h>
#include<time.h>

 enum status { continu, won, lose };

 int rollDice(void);


int main()
{
    enum status gamestatus;
    srand(time(NULL));
   int sum=rollDice();

   puts( "" );

 switch(sum){

      case 7:
      case 11:
      printf("the sum is :%d , congrats you win",sum);
     gamestatus= won;
     break;

      case 2:
      case 3:
      case 12:
      printf("the sum is :%d , crap you lost",sum);
      gamestatus= lose;
      break;

      default:
        printf("the sum is : %d , Press 'y' button to roll again",sum);
        gamestatus= continu;

 }

   while(gamestatus==continu)
   {
       char press;
       puts( "" );
       scanf("%c",&press);

       if(press=='y'||press=='Y'){
       puts( "" );
       int sum1=rollDice();

       if(7==sum1){
            puts( "" );
        printf("It is %d , you lost",sum1);
        gamestatus=lose;
       }


     else if(sum1==sum){
            puts( "" );
        printf("the sum is %d = %d the previous sum , you won",sum1,sum);
        gamestatus=won;
     }


    else if(sum!=sum1){
            puts( "" );
        printf("sum is:%d != %d",sum1,sum);
        gamestatus=continu;
    }

       }

   }

  return 0;
}

int rollDice(void){

  int n1= (rand()%6)+1;

  printf("the first number is :%d", n1);
  puts( "" );

  int n2= (rand()%6)+1;

  printf("the second number is :%d", n2);

  int sum = n1 + n2;
    return sum;

}

