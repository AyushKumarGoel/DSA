#include <stdio.h> 
int main() 
{   
    int data[]={1000,2000,3000,4000,5000,6000};
    int hash_location[]={2,5,9,0,5,9};
    int dat[10]={0};
    int size=6;
    int k=0;
    // for(int i=0;i<10;i++)
    //     printf("%d ",dat[i]);
    // printf("\n");
    for(int i=0;i<size;i++)
    {
        if(dat[hash_location[i]]==0)
            dat[hash_location[i]]=data[i];
        else
        {
            k=hash_location[i];
            while (1)
            {
                if(k>=10)
                    k=k-10;
                if(dat[k]==0)
                {
                    dat[k]=data[i];
                    break;
                }    
                k++;
            }   
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",dat[i]);
    return 0;
}