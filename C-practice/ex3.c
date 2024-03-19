#include <stdio.h>

void hello(){
	printf("For Debugging!");
}


int main(){
	int age = 10;
	int height = 72;
	hello();
	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);
	
	return 0;
}
