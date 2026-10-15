#include<stdio.h>
int main()
{
    int x,y;
   
    printf(" enter the order value:");         
    scanf("%d %d",&x,&y);
    if(x<70)
   { 
        printf(" order comfermation\n");
    }      
    else
    {
      printf(" order limit reached\n");  
    }       
    printf(" thnak you!\n");
    if(y<70)
    {
        printf(" order comfermation\n");
    }
    else{
        printf(" order limit reached\n");
    }
    printf(" thank you!\n");
    
    return 0;
    }