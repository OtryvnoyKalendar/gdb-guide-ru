#include <stdio.h> // ввод и вывод в консоль

void ChageInt(int* iPtr) {
	*iPtr += 5;
}

int main() {
	int i = 7;
	int* iPtr = &i;
	
	ChageInt(iPtr);
	
	printf("\n");
	printf("i = %d\n", i);
	
	ChageInt(iPtr);
	i++;
	
	printf("i = %d\n", i);
	printf("\n");
	
	return 0;
}
