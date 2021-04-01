#include "Ants.h"

void Ant::initAnt(glm::vec2 pos)
{
}

void Ant::update(float time)
{
	m_Vel = m_Vel + glm::vec2(ofRandom(2) - 1, ofRandom(2) - 1) * 0.5;
	m_Vel = glm::normalize(m_Vel) * 10;
	m_Pos += m_Vel * time;

	if (m_Pos.x <= 0.0f) {
		m_Pos.x = 0.001f;
		m_Vel.x *= -1.0f;
	}
	if (m_Pos.y <= 0.0f) {
		m_Pos.y = 0.001f;
		m_Vel.y *= -1.0f;
	}
	if (m_Pos.x >= ofGetWidth() / 2.0f) {
		m_Pos.x = (ofGetWidth() / 2.0f) - 0.001f;
		m_Vel.x *= -1.0f;
	}
	if (m_Pos.y >= ofGetHeight() / 2.0f) {
		m_Pos.y = (ofGetHeight() / 2.0f) - 0.001f;
		m_Vel.y *= -1.0f;
	}

}

void Ant::draw()
{
	ofPushMatrix();
	ofTranslate(m_Pos);
	ofSetColor(ofColor(255.0f, 0.0f, 0.0f));
	ofFill();
	ofDrawCircle(m_Pos, 1.0f);
	ofPopMatrix();

}
