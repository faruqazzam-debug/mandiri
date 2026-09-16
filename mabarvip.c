#include <stdio.h>

#define MAX 5

int main() {

    // ===== STACK =====
    int stack[MAX], top = -1;
    int i, x;

    printf("=== STACK ===\n");
    printf("Masukkan Antrian :\n");

    for(i = 0; i < MAX; i++) {
        scanf("%d", &x);
        stack[++top] = x;
    }

    printf("Antrian terakhir : %d\n", stack[top--]);

    // ===== QUEUE =====
    int queue[MAX], front = 0, rear = -1;

    printf("\n=== QUEUE ===\n");
    printf("Masukkan Antrian:\n");

    for(i = 0; i < MAX; i++) {
        scanf("%d", &x);
        queue[++rear] = x;
    }

    printf("Yang Main : %d\n", queue[front++]);

    // ===== DEQUE =====
    int deque[MAX];
    int frontD = 0, rearD = -1;
    char tipe;

    printf("\n=== DEQUE ===\n");
    printf("Masukkan Antrian (V=VIP, N=Normal):\n");

    for(i = 0; i < MAX; i++) {
        scanf("%d %c", &x, &tipe);

        if(tipe == 'V' || tipe == 'v') {
            for(int j = rearD; j >= frontD; j--) {
                deque[j+1] = deque[j];
            }
            deque[frontD] = x;
            rearD++;
        } else {
            deque[++rearD] = x;
        }
    }

    printf("Urutan Main:\n");
    for(i = frontD; i <= rearD; i++) {
        printf("%d ", deque[i]);
    }

    return 0;
}