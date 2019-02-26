#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(void)
{
	printf(1,"There are %d system calls.\n", getreadcount());
	int pid =fork();
	if (pid == 0){
		pid = setTICK(50);
	}
	pid = setTICK(150);
	printf(1, "setTICK is %d", pid);

	struct pstat *pS = malloc(sizeof(struct pstat));
	getpinfo(pS);

	printf(1, "Tickets equals %d \n", pS->tickets);

	wait();
	exit();
}
