#include <stdio.h>

void faktoriyel_al(int a);
int main (void) {

	int a;
	printf("\n faktoiyelini almak istediginiz sayiyi giriniz:");
	scanf("%d",&a);
	faktoriyel_al(a);
	return 0;
}

void faktoriyel_al(int a) {

	int i,sonuc=1;
	for(i=1; i<=a ;i++) {

		sonuc = sonuc*i;
	}
    
	printf("\n %d sayisinin faktoriyeli=%d",a,sonuc);
}
