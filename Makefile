Object = my_mat.o
Main = main.o
Flags = -Wall -g

all: connections

connections: $(Main) my_mat 
	gcc $(Flags) -o connections $(Main) my_mat -lm 

my_mat: $(Object) 
	ar -rcs -o my_mat $(Object)

$(Main): main.c my_mat.h
	gcc $(Flags) -c main.c 
$(Object): my_mat.c my_mat.h
	gcc $(Flags) -c my_mat.c 

	
.PHONY:clean all
clean:
	rm -f *.o *.a *.so connections my_mat



