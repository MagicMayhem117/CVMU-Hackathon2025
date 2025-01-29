#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
* selection sort
void selectionsort(int array[],int size){
    for(int i=size-1;i>=0;i--){
        int min_idx=1;
        for(int j=0;j<=i;j++){
            if(array[j]>array[min_idx]){
                min_idx=j;
            }
            
        }
        int temp = array[min_idx];
        array[min_idx]=array[i];
        array[i]=temp;
    }
}
void printarray(int array[], int size){
    for(int i=0;i<size;i++){
        printf("%d", array[i]);
    }
    printf("\n");
}

// PUSHPRAJSINH PUSHPRAJSINH PUSHPRAJSINH
int main(){
    struct timezone tz;
    struct timeval tv;

    int t1, t2;

    int n;
    printf("Enter size:");
    scanf("%d", &n);

    printf("Enter elements:");

    int data[n];
    for(int i=0;i<=n;i++){
        data[i]=rand()%n;
    }
    
    int size=sizeof(data)/sizeof(data[0]);
    printarray(data,size);

    gettimeofday(&tv,&tz);
    t1=tv.tv_usec;

    selectionsort(data,size);

    gettimeofday(&tv,&tz);
    t2=tv.tv_usec:

    printf("Sorted array in Ascending order: ");
    printarray(data,size);
    printf("\n Time is: %d", t2-t1);
    return 0;
}
