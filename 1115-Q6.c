#include<stdio.h>
#define size 4

int main (){
    char data[size];
    int arr[5][4];
    int n=0;
    scanf("%s",data);
    for(int i=0 ; i<4 ; i++){
        switch (data[n]-'0'){
            case 1:
            arr[0][i]=1;
            arr[1][i]=1;
            arr[2][i]=1;
            arr[3][i]=1;
            arr[4][i]=1;
            break;
            case 2:
            arr[0][i]=4;
            arr[1][i]=1;
            arr[2][i]=4;
            arr[3][i]=2;
            arr[4][i]=4;
            break;
            case 3:
            arr[0][i]=4;
            arr[1][i]=1;
            arr[2][i]=4;
            arr[3][i]=1;
            arr[4][i]=4;
            break;
            case 4:
            arr[0][i]=3;
            arr[1][i]=3;
            arr[2][i]=4;
            arr[3][i]=1;
            arr[4][i]=1;
            break;
            case 5:
            arr[0][i]=4;
            arr[1][i]=2;
            arr[2][i]=4;
            arr[3][i]=1;
            arr[4][i]=4;
            break;
            case 6:
            arr[0][i]=4;
            arr[1][i]=2;
            arr[2][i]=4;
            arr[3][i]=3;
            arr[4][i]=4;
            break;
            case 7:
            arr[0][i]=4;
            arr[1][i]=1;
            arr[2][i]=1;
            arr[3][i]=1;
            arr[4][i]=1;
            break;
            case 8:
            arr[0][i]=4;
            arr[1][i]=3;
            arr[2][i]=4;
            arr[3][i]=3;
            arr[4][i]=4;
            break;
            case 9:
            arr[0][i]=4;
            arr[1][i]=3;
            arr[2][i]=4;
            arr[3][i]=1;
            arr[4][i]=1;
            break;
            case 0:
            arr[0][i]=4;
            arr[1][i]=3;
            arr[2][i]=3;
            arr[3][i]=3;
            arr[4][i]=4;
            break;
        }
        n++;
    }
    // for( int i = 0; i < 5; i ++){
    //     for( int j = 0; j < 4; j ++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    int m=0;
    for( int i = 0; i < 5; i ++){
        for( int j = 0; j < 4; j ++){
            m=arr[i][j];
            switch (m){
                case 1:
                printf("    * ");
                break;

                case 2:
                printf("*     ");
                break;

                case 3:
                printf("*   * ");
                break;

                case 4:
                printf("***** ");
                break;
            }
        }
        printf("\n");
    }
    printf("\n");
}
