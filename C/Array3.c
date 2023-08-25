#include<stdio.h>
#include<stdlib.h>
int* fullarray(int a[],int key,int data)
{
    int i,j,k;
    k=key+2;
    int *b=(int*)malloc(sizeof(int)*(6));

    printf("\n %d hello\n\n",sizeof(b));
    for(i=0;i<=key;i++)
    {
        b[i]=a[i];
        printf("%d \n",b[i]);
    }
    b[i-1]=data;
    
    return b;
}
int addatend(int a[],int data,int key)
{
    int b[7];
    int i,j,k;
    
    
    if(a[key]){
        printf("data available\n\n");
       return 0;
        
    }else{
        a[key]=data;
        return 1;
        
    } 
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    int key=(sizeof(Arr)/sizeof(int));
    
    int *Arr2;
    if(addatend(Arr,5,key-1))
    {
        printf("succes\n");
    }
    else{
      Arr2=fullarray( Arr,key,5);
    }
    printf("\n s %d \n",sizeof(Arr2));

    //double Arr1[7]
    int i;
    for(i=0;i<sizeof(Arr2);i++)
    {
        printf("%d ",*(Arr2+i));
    }


    int Crr[5];

    Crr[0]=10;
    Crr[1]=20;
    Crr[2]=30;
    Crr[3]=40;
    Crr[4]=50;



    return 0;
}