#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    long long a[1005];
    long long total = 0;
    long long mx = -1;
    
    for (int i = 0; i < N; ++i) {
        scanf("%lld", &a[i]);
        total += a[i];
        if (a[i] > mx) mx = a[i];
    }

    int count = 0;
    int days[1005];
    
    for (int i = 0; i < N; ++i) {
        if (a[i] == mx) {
            days[count++] = i + 1;  
        }
    }

    double percent = 0.0;
    if (total > 0) percent = (double)(mx * (long long)count) * 100.0 / (double)total;

    printf("Max : %lld\n", mx);
    printf("Count : %d\n", count);
    printf("days :");
    
    for (int i = 0; i < count; ++i) {
        printf(" %d", days[i]);
    }
    
    printf("\n");
    printf("Percentage : %.3f%%\n", percent);

    return 0;
}
