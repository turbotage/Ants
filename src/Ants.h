#pragma once

#include "ofMain.h"

class Ant {
public:

	Ant() {}

	void initAnt(glm::vec2 pos);

	void update(float time);

	void draw();

protected:

	glm::vec2 m_Pos;
	glm::vec2 m_Vel;

	float m_Radius = 2.0f;
	float m_MaxSpeed = 10.0f;
	float m_SpeedChange = 0.5;

};

class QueenAnt : public Ant {
public:

	QueenAnt() {}

	void initQueenAnt(glm::vec2 pos);

	void update(float time);

	void draw();

private:

};