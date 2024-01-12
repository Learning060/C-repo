#include<stdio.h>
int main(){
    int n;
    printf("\nThis is my first c file.\n");
    printf("Enter the random number: ");
    scanf("%d", &n);
    printf("\nYou have entered : %d", n);
    for (int j = 0; j < n; j++)
    {
        printf("\n%d", j);
    }
    return 0;
}