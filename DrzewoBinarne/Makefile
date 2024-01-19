run:
	g++ -c -o DrzewoBinarne.o DrzewoBinarne.cpp
	g++ -o DrzewoTest.o DrzewoTest.cpp DrzewoBinarne.cpp
	./DrzewoTest.o
	@echo 
	@make clean

clean:                                                     
	rm -f *.o  *~ *.a *.so *.x core core* a.out; rm -rf ${LIB_DIR}