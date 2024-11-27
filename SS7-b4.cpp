#include <stdio.h>

int main() {
   int n;
   printf("nhap so phan tu mang: ");
   scanf("%d", &n);
   
   if (n <0 || n > 1000){
   		printf("so phan tu mang phai nam trong khoang [1;1000]");
   	return 1;
   }
   
   int mang[n];
   int length = sizeof(mang)/sizeof(mang[0]);
   for (int i = 0; i < length; i++){
   	 printf("nhap so phan tu trong mang[%d]: ", i);
   	 scanf("%d", &mang[i]);
   }
   
    for (int i = 0; i < length; i++){
   	 printf("mang[%d]: %d ", i, mang[i]);
   }
   
    return 0;
}
