#pragma once

#include "ofMain.h"

class Ant {
public:

	Ant() {}

	void initAnt(glm::vec2 pos);

	void update(float time);

	void draw();

private:

	glm::vec2 m_Pos;
	glm::vec2 m_Vel;

};
