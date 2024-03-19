#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person* Person_create(char *name, int age, int heightm int weight){
	struct Person *who = malloc(sizeof(struct Person));
	assert(who!=NULL);
	
	who->name = strdup(name);  //dynamically allocates memory so we need to free name later
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;	
}

void Person_destroy(struct Person *who){
	assert(who!=NULL);
	
	free(who->name);
	free(who);
}

void Person_print(struct Person *who){
	printf("Name: %s\n", who->name);
}

int main(int argc, char* argv[]){
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("FRank Blank", 20,72,180);
	
	printf("JOe is at memory location %p:\n", joe);
	Person_print(joe);
	
	joe->age += 20;
	
}



int main(int argc, char* argv[]){
	
}
