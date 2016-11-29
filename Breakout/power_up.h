#ifndef POWER_UP_H
#define POWER_UP_H

#include <GL/glew.h>
#include <glm/glm.hpp>

#include "game_object.h"

const glm::vec2 SIZE(60, 20);
const glm::vec2 VELOCITY(0.0f, 150.0f);

class PowerUp:public GameObject
{
public:
	PowerUp(std::string type, glm::vec3 color, GLfloat duration, glm::vec2 position, Texture2D texture) 
		:GameObject(position, SIZE, texture, color, VELOCITY)
		, m_sType(type)
		, m_fDuration(duration)
		, m_bActive(GL_FALSE)
	{
	}

public:
	std::string m_sType;
	GLfloat m_fDuration;
	GLboolean m_bActive;
};

#endif