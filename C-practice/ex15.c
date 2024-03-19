#include <stdio.h>



int main(int argc, char* argv[]){
	int ages[] = {23,4,12,89,2};
	char* names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};
	
	int count = sizeof(ages)/sizeof(int);
	int i=0;
	
	for(i = 0;i<count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	int* cur_age = ages;
	char** cur_names = names;
	
	for(i=0;i<count;i++){
		printf("%s is %d years old.\n", *(cur_names++), *(cur_age++));
	} 
	printf("---\n");
	
	/* for(i = 0;i<count;i++){
		printf("%s is %d years old again.\n", cur_names[i], cur_age[i]);
		
	} */
	printf("Check if 23: %d ", cur_age[i] );
	printf("Check if 23: %d ", *cur_age );
	return 0;
}
