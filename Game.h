#pragma once 

#include "SDL.h"; 
#include <iostream>

class Game {

public: 
	Game(); 
	~Game(); 

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen); 
	void handleEvents(); 
	void Update(); 
	void render(); 
	void clean(); 
	bool running() { return isRunning; }
	void DebugLog(); 
;
public: 
	bool isRunning; 
	SDL_Window* window; 
	SDL_Renderer* renderer; 
	int count; 


};