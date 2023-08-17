//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main function
int main(){
	char template[200];
    
    printf("Choose a template\n");
    printf("[web page], [game], [C project], [C++ project], [Rust project]\n");
	printf("Type web, game, c, cpp or rust\n");
    scanf("%s", template);

    //Wrb template
    if (strcmp(template, "web")==0){
		system("mkdir new_web");

        FILE *fptr;
        fptr = fopen("index.html", "w");
		fptr = fopen("app.js", "w");
		fptr = fopen("style.css", "w");
		
		system("mv index.html  new_web/index.html");
		system("mv style.css  new_web/style.css");
		system("mv app.js  new_web/app.js");
		
		free(fptr);

		printf("files created successfully\n");

    //game template
    }else if (strcmp(template, "game")==0) {
		printf("USE GODOT ENGINE!\n");
		system("godot");

        //C project template
	}else if (strcmp(template, "c")==0) {
		system("mkdir c_project");

		FILE *fptr;
        fptr = fopen("new.c", "w");

		system("mv new.c c_project/new.c");

		free(fptr);

		printf("files created successfully\n");

        //C++ project template
	}else if (strcmp(template, "cpp")==0) {
		system("mkdir cpp_project");

		FILE *fptr;
        fptr = fopen("new.cpp", "w");
		
		system("mv new.cpp cpp_project/new.cpp");

		free(fptr);


		printf("files created successfully\n");

        //rust project template
	}else if(strcmp(template, "rust")==0){
		system("cargo new rust_project");

		printf("New project created successfully\n");

	}else {
		printf("that's not an answer\n");
	}

	return 0;
}
