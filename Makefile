all:
	g++ -c Nodo.cpp Lista.cpp
	g++ Nodo.o Lista.o main.cpp -o main
