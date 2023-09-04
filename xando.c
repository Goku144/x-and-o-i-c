#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int i,y,x,z,j,m,n,u,r,compt,p;
char c[]="         ";
char v[]="         ";
char player;
void tab() //board fonction
{
  printf("\n\t  %c | %c | %c  \n\t ---|---|--- \n\t  %c | %c | %c  \n\t ---|---|--- \n\t  %c | %c | %c  \n\t\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
}

void cas(int i) //game choice fonction
{ 
    char gg[100];
    srand(time(NULL));

    
    
  for(j=0;j<9;j++) //loop for choising the case
  {
    
     do
              {
                
                  printf("entre case: ");
                    y=scanf("%d",&i);
                     if(y==0){ //prevent memory overflow
                     
                         fgets(gg,100,stdin);
                         
                     }
                      strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                         if((i<1 || i>9)|| y==0 ||c[i-1]!=' '){//prompt an error msg if the input is invalid
                          printf("invalid input!\n");
                         }

              }while(i<1||i>9||y==0||c[i-1]!=' ');//check for any invalid input in number and in fill spaces
              c[i-1]=player;
              tab();
              if(r==1){
             switch(player)//switch turns and prevent double enter of same carracter
            {
              case 'x':
              player='o';
              break;
              case 'o':
              player='x';
              break;
            }
              }
            if(r==0)
            { 

 //win x conditions
 if((c[0] == 'x' && c[1] == 'x'&& c[2]=='x')||(c[3] == 'x' && c[4] == 'x'&& c[5]=='x')||(c[6] == 'x' && c[7] == 'x'&& c[8]=='x')||(c[0] == 'x' && c[4] == 'x'&& c[8]=='x')||(c[2] == 'x' && c[4] == 'x'&& c[6]=='x')||(c[0] == 'x' && c[3] == 'x'&& c[6]=='x')||(c[1] == 'x' && c[4] == 'x'&& c[7]=='x')||(c[2] == 'x' && c[5] == 'x'&& c[8]=='x'))
          {
           
            break;
          }
          //win o conditions
   if((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o'))
     {
        
       break;
     }      
if(j==8)//no win check  
{
    
    break;
}
if(r==0)
{
  if(j==4)
  {
    break;
  }
}

do{
    compt=rand()%9;
                    compt;
                    if(p==1||p==2){
                     if(player=='x')//computer smart moves for x player
    {

    if (c[0] =='x' && c[1]=='x'&&c[2]!='o')
    {
        compt= 2;
    }
    if (c[1] =='x' && c[2]=='x'&&c[0]!='o')
    {
        compt= 0;
    }
    if (c[0] =='x' && c[2]=='x'&&c[1]!='o')
    {
        compt= 1;
    }
    if (c[3] =='x' && c[4]=='x'&&c[5]!='o')
    {
        compt= 5;
    }

    if (c[4] =='x' && c[5]=='x'&&c[3]!='o')
    {
        compt= 3;
    }
    
    if (c[3] =='x' && c[5]=='x'&&c[4]!='o')
    {
        compt= 4;
    }
    if (c[6] =='x' && c[7]=='x'&&c[8]!='o')
    {
        compt= 8;
    }
    if (c[7] =='x' && c[8]=='x'&&c[6]!='o')
    {
        compt= 6;
    }
    if (c[6] =='x' && c[8]=='x'&&c[7]!='o')
    {
        compt= 7;
    }
     if (c[0] =='x' && c[3]=='x'&&c[6]!='o')
    {
        compt= 6;
    }
     if (c[3] =='x' && c[6]=='x'&&c[0]!='o')
    {
        compt= 0;
    }
     if (c[0] =='x' && c[6]=='x'&&c[3]!='o')
    {
        compt= 3;
    }
     if (c[1] =='x' && c[4]=='x'&&c[7]!='o')
    {
        compt= 7;
    }
     if (c[4] =='x' && c[7]=='x'&&c[1]!='o')
    {
        compt= 1;
    }
     if (c[1] =='x' && c[7]=='x'&&c[4]!='o')
    {
        compt= 4;
    }
     if (c[2] =='x' && c[5]=='x'&&c[8]!='o')
    {
        compt= 8;
    }
     if (c[5] =='x' && c[8]=='x'&&c[2]!='o')
    {
        compt= 2;
    }
     if (c[2] =='x' && c[8]=='x'&&c[5]!='o')
    {
        compt= 5;
    }
     if (c[0] =='x' && c[4]=='x'&&c[8]!='o')
    {
        compt= 8;
    }if (c[4] =='x' && c[8]=='x'&&c[0]!='o')
    {
        compt= 0;
    }
     if (c[0] =='x' && c[8]=='x'&&c[4]!='o')
    {
        compt= 4;
    }
     if (c[2] =='x' && c[4]=='x'&&c[6]!='o')
    {
        compt= 6;
    }
     if (c[4] =='x' && c[6]=='x'&&c[2]!='o')
    {
        compt= 2;
    }
     if (c[2] =='x' && c[6]=='x'&&c[4]!='o')
    {
        compt= 4;
    }
}
                    
if(player=='o')//computer smart moves for o player
    {

     if (c[0] =='o' && c[1]=='o'&&c[2]!='x')
    {
        compt= 2;
    }
    
     if (c[1] =='o' && c[2]=='o'&&c[0]!='x')
    {
        compt= 0;
    }
    
     if (c[0] =='o' && c[2]=='o'&&c[1]!='x')
    {
        compt= 1;
    }
    
     if (c[3] =='o' && c[4]=='o'&&c[5]!='x')
    {
        compt= 5;
    }
    
     if (c[4] =='o' && c[5]=='o'&&c[3]!='x')
    {
        compt= 3;
    }
    
     if (c[3] =='o' && c[5]=='o'&&c[4]!='x')
    {
        compt= 4;
    }
    
     if (c[6] =='o' && c[7]=='o'&&c[8]!='x')
    {
        compt= 8;
    }
    
     if (c[7] =='o' && c[8]=='o'&&c[6]!='x')
    {
        compt= 6;
    }
    
     if (c[6] =='o' && c[8]=='o'&&c[7]!='x')
    {
        compt= 7;
    }
     if (c[0] =='o' && c[3]=='o'&&c[6]!='x')
    {
        compt= 6;
    }
     if (c[3] =='o' && c[6]=='o'&&c[0]!='x')
    {
        compt= 0;
    }
     if (c[0] =='o' && c[6]=='o'&&c[3]!='x')
    {
        compt= 3;
    }
     if (c[1] =='o' && c[4]=='o'&&c[7]!='x')
    {
        compt= 7;
    }
     if (c[4] =='o' && c[7]=='o'&&c[1]!='x')
    {
        compt= 1;
    }
     if (c[1] =='o' && c[7]=='o'&&c[4]!='x')
    {
        compt= 4;
    }
     if (c[2] =='o' && c[5]=='o'&&c[8]!='x')
    {
        compt= 8;
    }
     if (c[5] =='o' && c[8]=='o'&&c[4]!='x')
    {
        compt= 2;
    }
     if (c[2] =='o' && c[8]=='o'&&c[5]!='x')
    {
        compt= 5;
    }
     if (c[0] =='o' && c[4]=='o'&&c[8]!='x')
    {
        compt= 8;
    }
     if (c[4] =='o' && c[8]=='o'&&c[0]!='x')
    {
        compt= 0;
    }
     if (c[0] =='o' && c[8]=='o'&&c[4]!='x')
    {
        compt= 4;
    }
     if (c[2] =='o' && c[4]=='o'&&c[6]!='x')
    {
        compt= 6;
    }
     if (c[4] =='o' && c[6]=='o'&&c[2]!='x')
    {
        compt= 2;
    }
     if (c[2] =='o' && c[6]=='o'&&c[4]!='x')
    {
        compt= 4;
    }
 
  }
}

                    
                }while(c[compt]!=' '||compt<0||compt>8);
                  
   if(p==1||p==2){
                   if(player=='o')//computer smart moves for x to win
    {

    if (c[0] =='x' && c[1]=='x'&&c[2]==' ')
    {
        compt= 2;
    }
    
    if (c[1] =='x' && c[2]=='x'&&c[0]==' ')
    {
        compt= 0;
    }
    
    if (c[0] =='x' && c[2]=='x'&&c[1]==' ')
    {
        compt= 1;
    }
    
    if (c[3] =='x' && c[4]=='x'&&c[5]==' ')
    {
        compt= 5;
    }
    
    if (c[4] =='x' && c[5]=='x'&&c[3]==' ')
    {
        compt= 3;
    }
    
    if (c[3] =='x' && c[5]=='x'&&c[4]==' ')
    {
        compt= 4;
    }
    
    if (c[6] =='x' && c[7]=='x'&&c[8]==' ')
    {
        compt= 8;
    }
    
    if (c[7] =='x' && c[8]=='x'&&c[6]==' ')
    {
        compt= 6;
    }
    
    if (c[6] =='x' && c[8]=='x'&&c[7]==' ')
    {
        compt= 7;
    }
     if (c[0] =='x' && c[3]=='x'&&c[6]==' ')
    {
        compt= 6;
    }
     if (c[3] =='x' && c[6]=='x'&&c[0]==' ')
    {
        compt= 0;
    }
     if (c[0] =='x' && c[6]=='x'&&c[3]==' ')
    {
        compt= 3;
    }
     if (c[1] =='x' && c[4]=='x'&&c[7]==' ')
    {
        compt= 7;
    }
     if (c[4] =='x' && c[7]=='x'&&c[1]==' ')
    {
        compt= 1;
    }
     if (c[1] =='x' && c[7]=='x'&&c[4]==' ')
    {
        compt= 4;
    }
     if (c[2] =='x' && c[5]=='x'&&c[8]==' ')
    {
        compt= 8;
    }
     if (c[5] =='x' && c[8]=='x'&&c[2]==' ')
    {
        compt= 2;
    }
     if (c[2] =='x' && c[8]=='x'&&c[5]==' ')
    {
        compt= 5;
    }
     if (c[0] =='x' && c[4]=='x'&&c[8]==' ')
    {
        compt= 8;
    }
     if (c[4] =='x' && c[8]=='x'&&c[0]==' ')
    {
        compt= 0;
    }
     if (c[0] =='x' && c[8]=='x'&&c[4]==' ')
    {
        compt= 4;
    }
     if (c[2] =='x' && c[4]=='x'&&c[6]==' ')
    {
        compt= 6;
    }
     if (c[4] =='x' && c[6]=='x'&&c[2]==' ')
    {
        compt= 2;
    }
     if (c[2] =='x' && c[6]=='x'&&c[4]==' ')
    {
        compt= 4;
    }

}
if(player=='x')//computer smart moves for 0 to win
    {

     if (c[0] =='o' && c[1]=='o'&&c[2]==' ')
    {
        compt= 2;
    }
    
     if (c[1] =='o' && c[2]=='o'&&c[0]==' ')
    {
        compt= 0;
    }
    
     if (c[0] =='o' && c[2]=='o'&&c[1]==' ')
    {
        compt= 1;
    }
    
     if (c[3] =='o' && c[4]=='o'&&c[5]==' ')
    {
        compt= 5;
    }
    
     if (c[4] =='o' && c[5]=='o'&&c[3]==' ')
    {
        compt= 3;
    }
    
     if (c[3] =='o' && c[5]=='o'&&c[4]==' ')
    {
        compt= 4;
    }
    
     if (c[6] =='o' && c[7]=='o'&&c[8]==' ')
    {
        compt= 8;
    }
    
     if (c[7] =='o' && c[8]=='o'&&c[6]==' ')
    {
        compt= 6;
    }
    
     if (c[6] =='o' && c[8]=='o'&&c[7]==' ')
    {
        compt= 7;
    }
     if (c[0] =='o' && c[3]=='o'&&c[6]==' ')
    {
        compt= 6;
    }
     if (c[3] =='o' && c[6]=='o'&&c[0]==' ')
    {
        compt= 0;
    }
     if (c[0] =='o' && c[6]=='o'&&c[3]==' ')
    {
        compt= 3;
    }
     if (c[1] =='o' && c[4]=='o'&&c[7]==' ')
    {
        compt= 7;
    }
     if (c[4] =='o' && c[7]=='o'&&c[1]==' ')
    {
        compt= 1;
    }
     if (c[1] =='o' && c[7]=='o'&&c[4]==' ')
    {
        compt= 4;
    }
     if (c[2] =='o' && c[5]=='o'&&c[8]==' ')
    {
        compt= 8;
    }
     if (c[5] =='o' && c[8]=='o'&&c[2]==' ')
    {
        compt= 2;
    }
     if (c[2] =='o' && c[8]=='o'&&c[5]==' ')
    {
        compt= 5;
    }
     if (c[0] =='o' && c[4]=='o'&&c[8]==' ')
    {
        compt= 8;
    }
     if (c[4] =='o' && c[8]=='o'&&c[0]==' ')
    {
        compt= 0;
    }
     if (c[0] =='o' && c[8]=='o'&&c[4]==' ')
    {
        compt= 4;
    }
     if (c[2] =='o' && c[4]=='o'&&c[6]==' ')
    {
        compt= 6;
    }
     if (c[4] =='o' && c[6]=='o'&&c[2]==' ')
    {
        compt= 2;
    }
     if (c[2] =='o' && c[6]=='o'&&c[4]==' ')
    {
        compt= 4;
    }
  
}
   }
   if(player=='x'&&p==2)
   {
    if(c[0]=='x' && c[4]=='x' && c[8]=='o'&&j==1)
    {
      if(c[2]==' ')
      {
        compt=2;
      }
      if(c[6]==' ')
      {
        compt=6;
      }
    }
    if(c[8]=='x' && c[4]=='x' && c[0]=='o'&&j==1)
    {
      if(c[2]==' ')
      {
        compt=2;
      }
      if(c[6]==' ')
      {
        compt=6;
      }
    }
      if(c[6]=='x' && c[4]=='x' && c[2]=='o'&&j==1)
    {
      if(c[0]==' ')
      {
        compt=0;
      }
      if(c[8]==' ')
      {
        compt=8;
      }
    }
     if(c[2]=='x' && c[4]=='x' && c[7]=='o'&&j==1)
    {
      if(c[0]==' ')
      {
        compt=0;
      }
      if(c[8]==' ')
      {
        compt=8;
      }
    }
   }
   if(player=='o'&&p==2)
   {
    if(c[0]=='o' && c[4]=='o' && c[8]=='x'&&j==1)
    {
       if(c[2]==' ')
      {
        compt=2;
      }
      if(c[6]==' ')
      {
        compt=6;
      }
    }
    if(c[8]=='0' && c[4]=='0' && c[0]=='x'&&j==1)
    {
       if(c[2]==' ')
      {
        compt=2;
      }
      if(c[6]==' ')
      {
        compt=6;
      }
    }
      if(c[6]=='o' && c[4]=='o' && c[2]=='x'&&j==1)
    {
      if(c[0]==' ')
      {
        compt=0;
      }
      if(c[8]==' ')
      {
        compt=8;
      }
    }
     if(c[2]=='o' && c[4]=='o' && c[7]=='x'&&j==1)
    {
      if(c[0]==' ')
      {
        compt=0;
      }
      if(c[8]==' ')
      {
        compt=8;
      }
    }
   }
               
                 switch(player)//switch turns and prevent double enter of same carracter
            {
              case 'x':
              player='o';
              break;
              case 'o':
              player='x';
              break;
            }
            if(c[4]==' '&& (p==2||p==1))
            {
                compt=4;
            }
            if(player=='o'&&p==2)
            {
            if (((c[0]=='x'&&c[8]=='x')||(c[2]=='x'&&c[6]=='x'))&&j==1)
            {
                if(c[1]==' ')
                {
                  compt=1;
                }
                 if(c[3]==' ')
                {
                    compt=3;
                }
                 if(c[5]==' ')
                {
                    compt=5;
                }
                 if(c[7]==' ')
                {
                    compt=7;
                }
            }
         }
                if(player=='x'&&p==2)
            {
            if (((c[0]=='o'&&c[8]=='o')||(c[2]=='o'&&c[6]=='o'))&&j==1)
            {
                if(c[1]==' ')
                {
                  compt=1;
                }
                 if(c[3]==' ')
                {
                    compt=3;
                }
                 if(c[5]==' ')
                {
                    compt=5;
                }
                 if(c[7]==' ')
                {
                    compt=7;
                }
            }
        }
                printf("\n\tcomputer\n");
                c[compt]=player;
             tab();
             switch(player)//switch turns and prevent double enter of same carracter
            {
              case 'x':
              player='o';
              break;
              case 'o':
              player='x';
              break;
            }
             //win x conditions
 if((c[0] == 'x' && c[1] == 'x'&& c[2]=='x')||(c[3] == 'x' && c[4] == 'x'&& c[5]=='x')||(c[6] == 'x' && c[7] == 'x'&& c[8]=='x')||(c[0] == 'x' && c[4] == 'x'&& c[8]=='x')||(c[2] == 'x' && c[4] == 'x'&& c[6]=='x')||(c[0] == 'x' && c[3] == 'x'&& c[6]=='x')||(c[1] == 'x' && c[4] == 'x'&& c[7]=='x')||(c[2] == 'x' && c[5] == 'x'&& c[8]=='x'))
          {
           
            break;
          }
          //win o conditions
   if((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o'))
     {
        
       break;
     }      
if(j==8)//no win check  
{
    
    break;
}
if(r==0)
{
  if(j==4)
  {
    break;
  }
}

            }
            //win x conditions
 if((c[0] == 'x' && c[1] == 'x'&& c[2]=='x')||(c[3] == 'x' && c[4] == 'x'&& c[5]=='x')||(c[6] == 'x' && c[7] == 'x'&& c[8]=='x')||(c[0] == 'x' && c[4] == 'x'&& c[8]=='x')||(c[2] == 'x' && c[4] == 'x'&& c[6]=='x')||(c[0] == 'x' && c[3] == 'x'&& c[6]=='x')||(c[1] == 'x' && c[4] == 'x'&& c[7]=='x')||(c[2] == 'x' && c[5] == 'x'&& c[8]=='x'))
          {
           
            break;
          }
          //win o conditions
   if((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o'))
     {
        
       break;
     }      
if(j==8)//no win check  
{
    
    break;
}
if(r==0)
{
  if(j==4)
  {
    break;
  }
}
    }
  
}
void resultcheck()//fonction to check all results
{
    char gg[100];
    //check x win conditions
    if((c[0] == 'x' && c[1] == 'x'&& c[2]=='x')||(c[3] == 'x' && c[4] == 'x'&& c[5]=='x')||(c[6] == 'x' && c[7] == 'x'&& c[8]=='x')||(c[0] == 'x' && c[4] == 'x'&& c[8]=='x')||(c[2] == 'x' && c[4] == 'x'&& c[6]=='x')||(c[0] == 'x' && c[3] == 'x'&& c[6]=='x')||(c[1] == 'x' && c[4] == 'x'&& c[7]=='x')||(c[2] == 'x' && c[5] == 'x'&& c[8]=='x'))
          {
  
    printf("x is the winner\n");//prompt msg if x win
    n++;//x score calculator
    printf("x: %d and o: %d\n",n,m);//promt x and o scors
    do{
    printf("0:leave  1:continu  2:reset\n");//prompt choise for leave,continu and reset
    printf("here:\t");
    y=scanf("%d",&u);
     if(y==0)
                         {
                            fgets(gg,100,stdin);
                         }
                          strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                         if((u<0 || u>2)|| y==0)
                         {
                          printf("invalid input!\n");
                         }
    }while(u<0||u>2||y==0);
   
    if(u==2)//reset score condition
    {
       n=0;
        m=0;
        printf("\n\tall score has been reset\n");
         printf("x: %d and o: %d\n",n,m);
    }
          }
   if((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o'))
     {
        char gg[100];
        
  if((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o'))
    {
    printf("o is the winner\n");//prompt msg if o win
    m++;//o score calculator
    printf("x: %d and o: %d\n",n,m);
    do{
    printf("0:leave  1:continu  2:reset\n");
    printf("here:\t");
    y=scanf("%d",&u);
     if(y==0)
                         {
                            fgets(gg,100,stdin);
                            printf("invalid input!\n");
                         }
                          strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                         if((u<0 || u>2)|| y==0)
                         {
                          printf("invalid input!\n");
                         }
    }while(u<0||u>2||y==0);
    
    if(u==2)
    {
       n=0;
        m=0;
        printf("\n\tall score has been reset\n");
         printf("x: %d and o: %d\n",n,m);
    }
     }
     }        
 if(!((c[0] == 'o' && c[1] == 'o'&& c[2]=='o')||(c[3] == 'o' && c[4] == 'o'&& c[5]=='o')||(c[6] == 'o' && c[7] == 'o'&& c[8]=='o')||(c[0] == 'o' && c[4] == 'o'&& c[8]=='o')||(c[2] == 'o' && c[4] == 'o'&& c[6]=='o')||(c[0] == 'o' && c[3] == 'o'&& c[6]=='o')||(c[1] == 'o' && c[4] == 'o'&& c[7]=='o')||(c[2] == 'o' && c[5] == 'o'&& c[8]=='o')||(c[0] == 'x' && c[1] == 'x'&& c[2]=='x')||(c[3] == 'x' && c[4] == 'x'&& c[5]=='x')||(c[6] == 'x' && c[7] == 'x'&& c[8]=='x')||(c[0] == 'x' && c[4] == 'x'&& c[8]=='x')||(c[2] == 'x' && c[4] == 'x'&& c[6]=='x')||(c[0] == 'x' && c[3] == 'x'&& c[6]=='x')||(c[1] == 'x' && c[4] == 'x'&& c[7]=='x')||(c[2] == 'x' && c[5] == 'x'&& c[8]=='x')))

{
  printf("\tDraw\n");//prompt if no x no o win 
    do{
    printf("0:leave  1:continu  2:reset\n");
    printf("here:\t");
    y=scanf("%d",&u);
     if(y==0)
                         {
                            fgets(gg,100,stdin);
                             strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                            printf("invalid input!\n");
                         }
                         if((u<0 || u>2)|| y==0)
                         {
                          printf("invalid input!\n");
                         }
    }while(u<0||u>2||y==0);
   
     if(u==2)
    {
        x=0;
        y=0;
        printf("\n\tall score has been reset\n");
         printf("x: %d and o: %d\n",x,y);
    }
}
}
int main() //main function
{
    char gg[100];
    int f;
    for(f=0;f<999;f++)//let u play 999 time befor the program close
    {
        strcpy(c,v);//reset the board after finishing the game
        printf("\n W e l c o m e   T o   T i c   T a c   T o e\n ");
    printf("\n\t  1 | 2 | 3  \n\t ---|---|--- \n\t  4 | 5 | 6  \n\t ---|---|--- \n\t  7 | 8 | 9  \n\t\n");//prompt table instruction use
    printf("   to leave enter: 'exit'\n");
printf("\n  want to paly with : \n 0:Computer    1:Friend");
    do
              {
                
                   printf("\n here: ");
                    y=scanf("%d",&r);
                     if(y==0){ //prevent memory overflow
                     
                         fgets(gg,100,stdin);
                         
                     }
                     strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                         if((r<0 || r>1)|| y==0){//prompt an error msg if the input is invalid
                          printf("invalid input!\n");
                         }
              }while((r<0||r>1||y==0));
              if(r==0)
              {
                printf("    level difficulty");
                printf("\n 0:easy    1:medium   2:hard");
    do
              {
                
                   printf("\n here: ");
                    y=scanf("%d",&p);
                     if(y==0){ //prevent memory overflow
                     
                         fgets(gg,100,stdin);
                         
                     }
                     strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"exit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
                         if((p<0 || p>2)|| y==0){//prompt an error msg if the input is invalid
                          printf("invalid input!\n");
                         }
              }while((p<0||p>2||y==0));
              }
                

do{
        printf("x or o: ");//prompt to choise x or o
        scanf(" %c",&player);//scan x or o with ignoring whitespace carracteres

        if(player!='o'&& player!='x')//verify invalide input
        {
        fgets(gg,100,stdin);//consume unwanted carracter to prevente memory overflow
         strlwr(gg);//lower the carracter if he enter exite in upercase
                         if(strcmp(gg,"xit\n")==0)//exit condition
                         {
                          printf("\n\tleaving...");
                        exit(0);
                         }
        printf("just x or o !!\n");
        }
     }while(player!='o'&& player!='x');//condition for invalide input
     cas(i);//the cas fonction
     resultcheck();//the result fonction
     if(u==0)//leave choise
     {
        break;
     }
    }
if(n<m)//prompt a msg if o score is highr then x
    printf("\n\to is the champ %d vs %d\t\n",m,n);
if(m<n)//prompt a msg if x score is highr then o
    printf("\n\tx is the champ %d vs %d\t\n",n,m);
if(m==n)//prompt a msg if it was a draw in evry match
    printf("\n\tthere is no champ\t\n");
   return 0; 
}
