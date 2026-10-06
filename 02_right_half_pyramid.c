#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){ //This is for the rows 
        for(int j = 0; j<=i; j++){ //This loop will execute itself for the same number of rows
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}