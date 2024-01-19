run:
	g++ -c -o StosTablicowy.o StosTablicowy.cpp
	g++ -o StosTest.o StosTest.cpp StosTablicowy.cpp
	./StosTest.o
	@echo 
	@make clean

clean:                                                     
	rm -f *.o  *~ *.a *.so *.x core core* a.out; rm -rf ${LIB_DIR}