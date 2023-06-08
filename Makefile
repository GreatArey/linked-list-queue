all:
	g++ -c src/main.cpp -o obj/main.o 
	# g++ -c src/queue.cpp -o obj/queue.o
	g++ -o bin/main obj/*.o  

clean:
	rm obj/*.o
	rm bin/main

run:
	./main 
