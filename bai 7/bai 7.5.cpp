// bai 7.5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a[1000], n;
	printf("nhap n: ");
	scanf("%d", &n);
// H�m void srand(unsigned int seed)
// H�m n�y cung cap seed cho bo sinh so ngau nhi�n duoc su dung boi h�m rand()
	srand(time(NULL));//H�m time_t time(time_t *seconds) tra ve thoi gian tu Epoch (00:00:00 1/1/1970 theo UTC), duoc uoc luong bang giay
	for(int i=0; i<n; i++){
		a[i]=-rand()%100-1;
	}
	for (int i=0; i<n; i++) printf("%d\t", a[i]);
	return 0;
}
