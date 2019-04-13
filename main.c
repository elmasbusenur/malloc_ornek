#include <stdio.h>
#include<stdlib.h>

int main() {
    int n,i,*ptr, sum=0;
    printf("Eleman sayisini giriniz\n");
    scanf("%d", &n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Yeterli hafiza yok");

    }
    printf("Dizi elemanlarini girin\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("toplam=%d",sum);
    getchar();
    getchar();
    return 0;
}