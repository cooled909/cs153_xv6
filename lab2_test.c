#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int PScheduler(void);
	printf(1, "\n This is the correctness test for lab #2\n");
	PScheduler();
	return 0;
}

int PScheduler(void) {
	int pid;
	int i,j,k;
	int priorityArr[] == {40, 10, 9, 0, 12};
	
	printf(1, "\n Testing the prio scheduler and setPriority(int priority) system call:\n");
	printf(1 "\n Assuming that the priorities range between 0 to 40\n");
	print(1, "\n 0 is the highest priority. All processes have a default priority of 10\n");
	printf(1, "\n The parent processes will switch to priority 0\n");
	setPriority(0);

	for(i = 0; i < 5; i++) {
		pid = fork();
		if (pid > 0) {
			continue;
		} else if(pid == 0) {
			setPriority(priorityArr[i]);
			printf(1, "\n child# %d has priority %d before starting its work", getpid(), getPriority());
			for (j = 0; j < 50000; j++) {
				for (k = 0; k < 1000; k++) {
					asm("nop");
				}
			}
		printf(1, "\n child# %d has priority %d after finishing its work", getpid(), getPriority());
		printf(1, "\n child# %d with original priority %d has finished. \n", getpid(), priorityArr[i]);
		exit();
	} else {
		printf(2, "\n Error \n");
	}
}

	if (pid > 0) {
		for (i = 0; i < 5; i++) {
			wait(0);
		}
		printf(1,"\n if processes with the highest priority finished first then it passes the test \n");
	}
	exit();
}

