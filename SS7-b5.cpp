#include <stdio.h>

int main() {
	int mang[5] = {782, 66, 584, 15,1};
	int phanTuLonNhat = mang[0], phanTuNhoNhat = mang[0];
	int length = sizeof(mang)/sizeof(mang[0]);
	for (int i = 0; i< length; i++){
		if (phanTuLonNhat < mang[i]){
			phanTuLonNhat = mang[i];
		}
		if (phanTuNhoNhat > mang[i]){
			phanTuNhoNhat = mang[i];
		}
	}
	printf("phan tu lon nhat: %d\nphan tu nho nhat: %d", phanTuLonNhat, phanTuNhoNhat);
    return 0;
}
