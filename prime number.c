#include <stdio.h>

int main()
{
    int i,j,n;
    int count = 0;
    
    printf("輸入整數：");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for( j = i; j <= n; j ++){
            if( i*j == n ){
                count ++;
                printf("%dx%d=%d\n",i,j,i*j);
            }
        }
    }
        
    if ( count > 1){
        printf("不是質數\n");
    }else{
        printf("是質數\n");
        }

    return 0;
}
