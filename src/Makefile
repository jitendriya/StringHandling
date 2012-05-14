#define comment line
include mkrules.inc

SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

LIBRARY = $(OBJDIR)/$(LIBNAME)

$(OBJDIR)/%.o: %.c
	mkdir -p $(OBJDIR)
	gcc $(INCLUDES) -c $< -o $(OBJDIR)/$*.o
	

$(LIBRARY): $(OBJS)
	ar -r $(LIBRARY) $(OBJS)


all: $(OBJS) $(LIBRARY)

clean:
	rm -rf $(OBJDIR)

