#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "game.hpp"
#include "resources.hpp"
#include "render.hpp"
#include "shader.hpp"
class Game
{
private:
public:
	~Game();
	Game() {};

	void init();
	void build();

	Render *get_render();
	Shader get_shader();
};

#endif // __GAME_HPP__