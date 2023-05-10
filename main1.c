#include <stdio.h>

	int linearSearch(int arr[], int h, int m) {
    int i;
    for (i = 0; i < h; i++) {
        if (arr[i] == m) {
            return i;
        }
    }
    return -1;
}

	int main() {
    int h, m, result, i;

    printf("Dizinin boyutunu giriniz: ");    // Dizinin boyutunu kullanıcıdan talep etme
    scanf("%d", &h);

    int arr[h];

    
    printf("Dizinin elemanlarini giriniz:\n");  // Elemanları kullanıcıdan girmesini talep etme
    for (i = 0; i < h; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Aranacak elemani giriniz: ");   // aranacak olan elemanı kullanıcıdan girmesini talep etme
    scanf("%d", &m);

   result = linearSearch(arr, h, m);     // Linear Search ile elemanın varlığını belirleme

    if (result == -1) {
        printf("Eleman bulunamadi.\n");
    } else {
        printf("Eleman dizinin %d. indeksinde bulundu.\n", result);
    }

    return 0;
}
