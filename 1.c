#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
 int n,i,f,q,qq=0;
 printf("enter the no.of stations: ");
 scanf("%d",&n);
 int list[n-1][2];
 for (i=0;i<n-1;i++){
     for (f=0;f<2;f++){
         printf("enter the list values: ");
         scanf("%d",&list[i][f]);
         
      }
 }
// sorting!
int fq;
for(i=0;i<n-1;i++){
    if(list[i][0]>list[i][1]){
        fq=list[i][0];
        list[i][0]=list[i][1];
        list[i][1]=fq;
    }
}
// finding similarities!
int x=0;
for(i=0;i<n-1;i++){
     if(i==n-2){
         if(list[i][0]==list[0][0] && list[i][1]==list[0][1]){
             x=x+1;
             
         }
     
     }
    else{
        if(list[i][0]==list[i+1][0] && list[i][1]==list[i+1][1]){
            x=x+1;
            
        }
     
    }
}

int es[n-x-1][2];
// setting||
for (i=0;i<n-x-1;i++){
    for (f=0;f<2;f++){
        es[i][f]=0;
    }
}
int ss1=0;

qq=qq+x;
    // uniq finding!!
for(i=0;i<n-1;i++){
     if(i==n-2){
         if(list[i][0]==list[0][0] && list[i][1]==list[0][1]){
            ss1=ss1+1;
         }
         else{
            es[i][0]=list[i][0];
            es[i][1]=list[i][1];
         }
     
     }
    else{
        if(list[i][0]==list[i+1][0] && list[i][1]==list[i+1][1]){
            ss1=ss1+1;
        }
        else{
           es[i][0]=list[i][0];
           es[i][1]=list[i][1];
        }
     
    }
}
// finding solution//
for (i=0;i<n-1-x;i++){
    if(es[i][0]==0 && es[i][1]==0){
        
    }
    else{
      if(es[i][0]%2==0){
            if(es[i][1]==es[i][0]+1 || es[i][1]==es[i][0]+2 || es[i][1]==es[i][0]-2){
                 qq=qq;
             }
            else{
                qq=qq+1;
             }
      }
      else{
            if(es[i][1]==es[i][0]+2 || es[i][1]==es[i][0]-1){
                  qq=qq;
        }
            else{
                  qq=qq+1;
           
        }
    }
    }
}
if(qq!=0){
        printf("no of during: %d",qq);
}
else{
    printf("no of during :%d",-1);
	}
}