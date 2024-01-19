run:
	g++ -c -o KolejkaCykliczna.o KolejkaCykliczna.cpp
	g++ -o KolejkaTest.o KolejkaTest.cpp KolejkaCykliczna.o
	./KolejkaTest.o
	@echo 
	@make clean

clean:                                                     
	rm -f *.o  *~ *.a *.so *.x core core* a.out; rm -rf ${LIB_DIR}