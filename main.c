#include <stdio.h>

int arrNumber[] = {8, 2, 3, 1, 5, 7, 9, 0};

void hienThiMang() {
    printf("Hien thi cac phan tu trong mang:\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d", arrNumber[i]);
    }
}

int main() {
    hienThiMang();
    for (int i = 0; i < 7; ++i){
        printf("\nTai i = %d, gia tri cua arrNumber tai index %d la arrNumer[%d] = %d\n", i, i, i, arrNumber[i]);
        for (int j = i + 1; j < 8; ++j){
            printf("\nSo sanh %d voi %d\n", arrNumber[i], arrNumber[j]);
            if(arrNumber[i] > arrNumber[j]){
                printf("\nVi %d > %d nen thuc hien trao doi gia tri.\n", arrNumber[i], arrNumber[j]);
                int tmp = arrNumber[i];
                arrNumber[i] = arrNumber[j];
                arrNumber[j] = tmp;

            }
            else {
                printf("Khong thuc hien hoan doi vi tri.\n");
            }
            hienThiMang();
        }

    }
    return 0;
}