#include<stdio.h>
int main(){
    int n;
    printf("\nThis is my first c file.\n");
    printf("Enter the random number: ");
    scanf("%d", &n);
    printf("\nYou have entered : %d", n);

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", i);
    }
    
    return 0;
}