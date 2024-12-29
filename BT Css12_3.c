#include <stdio.h>
long long giaiThua(int n) {
    long long ketQua = 1;

    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }

    return ketQua;
}

int main() {
    int n;
    printf("Nhập một số nguyên: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Giai thừa không xác định cho số âm.\n");
    } else {
        long long result = giaiThua(n);
        printf("Giai thừa của %d là: %lld\n", n, result);
    }

    return 0;
}