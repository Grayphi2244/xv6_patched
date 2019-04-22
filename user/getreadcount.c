#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(void)
{
	printf(1,"There are %d system calls.\n", getreadcount());

	int i = 0;

	for(i = 0; i < 4; i++){
		int pid =fork();
		if (pid == 0){
			pid = setTICK(10*i);
		}

	}

	struct pstat *pS = malloc(sizeof(struct pstat));
	getpinfo(pS);


	exit();
}
