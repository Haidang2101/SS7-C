#include <stdio.h>

int main() {
    int arr[5] = {315, 69, 31, 76, 24};
    int phanTuSoChan = 0;
    for(int i = 0; i< 5; i++){
    	if (arr[i]%2==0){
    	printf("%d\n",arr[i]);
    	phanTuSoChan = 1;
		}
	}
	if (phanTuSoChan!=1){
    	printf("mang khong chua so chan");
	}
	
    return 0;
}
