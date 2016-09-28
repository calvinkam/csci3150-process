CC=gcc
CFLAGS=-Wall
EXE=\
	execl	\
	execlp	\
	execle	\
	execv	\
	execvp	\
	execve	\
	system_use \
	env	\
	exec_error	\
	
all: ${EXE}
clean:
	rm -rf ${EXE}

print-%:
	@echo '$*=$($*)'
