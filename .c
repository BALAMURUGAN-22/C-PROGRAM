#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    //W PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||(i+j==n-1&&i>=n/2)||j==n-1||(i==j&&i>n/2))
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //E PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n/2||i==n-1||j==0)
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //L PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||i==n-1)
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //C PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1)
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //0 PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1)
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //M PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||j==n-1||(i+j==n-1&&i<=n/2)||(i==j&&i<n/2))
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
    //E PATTERN
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n/2||i==n-1||j==0)
            printf("*");
            else
            printf(" ");
            }
    printf("\n");
    }
}
