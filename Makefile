DIRS = include lib apps
.PHony : all clean

all :
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d; \
	done

clean :
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d clean; \
	done

