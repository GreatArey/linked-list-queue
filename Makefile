all:
	g++ -c src/main.cpp -o obj/main.o 
	g++ -o bin/main obj/*.o  

clean:
	rm obj/*.o
	rm bin/main

run:
	./main 
