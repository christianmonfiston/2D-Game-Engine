#include "SDL.h";
#include "Game.h"
#include <iostream>

using namespace std;

Game* game = nullptr; 

int main(int argc , char *argv[]) {

	game = new Game(); 
	game->init("Chris Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, false);

	while (game->running()) {
		game->handleEvents();
		game->Update();
		game->render();

	}
	game->clean(); 

	return 0;
}