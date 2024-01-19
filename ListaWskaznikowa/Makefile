run:
	g++ -c -o ListaWskaznikowa.o ListaWskaznikowa.cpp
	g++ -o ListaTest.o ListaTest.cpp
	./ListaTest.o
	@echo 
	@make clean

clean:                                                     
	rm -f *.o  *~ *.a *.so *.x core core* a.out; rm -rf ${LIB_DIR}