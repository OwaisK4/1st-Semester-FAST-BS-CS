#include <stdio.h>
#include <string.h>
#include <math.h>

int distance_method_1(char *array1, char *array2);
int distance_method_2(char *array1, char *array2);

int main(){
	int count_ab, count_ac, count_ad, count_bc, count_bd, count_cd;
	char A[] = "gtggcaacgtgc";
	char B[] = "gtagcagcgcgc";
	char C[] = "gcggcacagggt";
	char D[] = "gtgacaacgtgc";
	count_ab = distance_method_1(A, B);
	count_ac = distance_method_1(A, C);
	count_ad = distance_method_1(A, D);
	count_bc = distance_method_1(B, C);
	count_bd = distance_method_1(B, D);
	count_cd = distance_method_1(C, D);
	printf("The distance of all chromosome combinations are:\n");
	printf("AB = %d\nAC = %d\nAD = %d\nBC = %d\nBD = %d\nCD = %d", count_ab,count_ac,count_ad,count_bc,count_bd,count_cd);
	
	count_ab = distance_method_2(A, B);
	count_ac = distance_method_2(A, C);
	count_ad = distance_method_2(A, D);
	count_bc = distance_method_2(B, C);
	count_bd = distance_method_2(B, D);
	count_cd = distance_method_2(C, D);
	printf("\n\nThe distance of all chromosome combinations are:\n");
	printf("AB = %d\nAC = %d\nAD = %d\nBC = %d\nBD = %d\nCD = %d", count_ab,count_ac,count_ad,count_bc,count_bd,count_cd);
	return 0;
}

int distance_method_1(char *array1, char *array2){
	int i, count=0;
	int size = strlen(array1);
	for (i=0; i<size; i++){
		if (array1[i] != array2[i])
			count++;
	}
	return count;
}

int distance_method_2(char *array1, char *array2){
	int a1=0, c1=0, g1=0, t1=0;
	int a2=0, c2=0, g2=0, t2=0;
	int i, size = strlen(array1);
	for (i=0; i<size; i++){
		if (array1[i] == 'a')
			a1++;
		if (array1[i] == 'c')
			c1++;
		if (array1[i] == 'g')
			g1++;
		if (array1[i] == 't')
			t1++;
			
		if (array2[i] == 'a')
			a2++;
		if (array2[i] == 'c')
			c2++;
		if (array2[i] == 'g')
			g2++;
		if (array2[i] == 't')
			t2++;	
	}
	int discrep_a = abs(a1-a2);
	int discrep_c = abs(c1-c2);
	int discrep_g = abs(g1-g2);
	int discrep_t = abs(t1-t2);
	
	int count = discrep_a + discrep_c + discrep_g + discrep_t;
	return count;
}
