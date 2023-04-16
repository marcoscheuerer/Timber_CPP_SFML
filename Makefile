build:
	g++ Game.cpp -c
	g++ Game.o -o Game -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

run:
	./Game

clean:
	rm -f ./*.o
	rm -f ./Game
