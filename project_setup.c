#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char template[200];

    printf("Choose a template\n");
    printf("[web page], [game], [C project], [C++ project]");
	printf("Type web, game, C or Cpp");
    scanf("%s", template);

    if (strcmp(template, "web")==0){
        FILE *fptr;
        fptr = fopen("index.html", "w");
		fptr = fopen("app.js", "w");
		fptr = fopen("style.css", "w");
		
		free(fptr);

		printf("files created successfully");

    }else if (strcmp(template, "game")==0) {
		printf("USE GODOT ENGINE!\n");
		system("godot");

	}else if (strcmp(template, "C")==0) {
		 FILE *fptr;
        fptr = fopen("idk.c", "w");

		free(fptr);

		printf("file created successfully");

	}else if (strcmp(template, "Cpp")==0) {
		 FILE *fptr;
        fptr = fopen("idk.cpp", "w");

		free(fptr);


		printf("file created successfully");

	}else {
		printf("that's not an answer");
	}
 
	return 0;
}
