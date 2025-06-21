#include <stdio.h> // ввод и вывод в консоль

int main() {
	#ifdef DEBUG
		printf("Hello debug!\n");
	#else
		printf("Hello release!\n");
	#endif
	
	return 0;
}
