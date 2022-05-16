#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main() {
	FILE *info;
    char data[51][80];
	int i;
    srandom(getpid());

	info = fopen("sayings.txt", "r");
	if (info == NULL) {
		perror("file");
		printf("Error\n");
		exit(-1);
	}

    for (i = 0; i<51; i ++){
        fgets(data[i],80, info);
    }

    printf(data[random()%51]);

}