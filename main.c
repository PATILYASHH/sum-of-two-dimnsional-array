#include<stdio.h>

int main() {
    int sum = 0;
    int a[2][3] = {{1,2,3},{3,2,1}};
    

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
