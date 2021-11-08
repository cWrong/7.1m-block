LDLIBS=-lnetfilter_queue

all: 1m-block

1m-block: 1m-block.o iphdr.o ip.o tcphdr.o mac.o
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm -f 1m-block *.o
