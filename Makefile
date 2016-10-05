SUBDIRS = GettingStarted \
	LetsFork	\
	Exec		\
	Wait		\
	Signals		\
	Misc		\
	Shell		\

all:
	for dir in $(SUBDIRS) ; \
	do \
		make -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS) ; \
	do \
		make -C $$dir clean; \
	done
