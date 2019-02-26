#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
	printf(1,"There are %d system calls.\n", getreadcount());
	int pid =fork();
	if (pid == 0){
		pid = setTICK(50);
		printf(1,"hi\n");
	}
	pid = setTICK(150);
	printf(1, "my name is sam\n");
	printf(1, "setTICK is %d", pid);

	wait();
	exit();
}
