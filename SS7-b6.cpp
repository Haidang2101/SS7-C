#include <stdio.h>

int main() {
	int mang[5] = {1, 2, 3, 4, 5};
	int length = sizeof(mang)/sizeof(mang[0]);
	
	for(int i = 0; i < length; i++){
		if(mang[i]%2==0){
			mang[i] += 3;
		}else{
			mang[i] += 2;	
		}
		printf("%d", mang[i]);
	}
    return 0;
}
