#include<stdio.h>
int fb(int n){
    if(n==0){
        return 0;
    }
    else if( n ==1){
        return 1;
    }
    else{
        return fb(n-1)+ fb(n-2);
    }

}
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("%d,",fb(i));
    }

    return 0;
}