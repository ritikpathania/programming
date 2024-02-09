// sum of first n natural numbers
// print them in reverse
// using single counter  variable

#include <stdio.h>

int main() {
        int n;
        scanf("%d", &n);

        int sum=0;
        for(int j=n; j>=1; j--) {
                sum += j;
                printf("%d\n", j);
        }

        printf("%d\n", sum);

        return 0;
}
