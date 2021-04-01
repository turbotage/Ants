#pragma once

#include "ofMain.h"


class Hive {
public:

	Hive() {}

	void initHive(glm::vec2 pos, float radius) {

	}

	void draw() {

	}

private:



};

class World {
public:

	World() {}

	void initWorld(int sizex, int sizey) {
		for (int i = 0; i < 1000; ++i) {
			m_Ants.emplace_back();
			m_Ants.back().initAnt({ ofRandom(sizex), ofRandom(sizey) });
		}
		m_LastUpdateTime = ofGetSystemTimeMicros();
	}
	
	void update() {
		float deltaT = (ofGetSystemTimeMicros() - m_LastUpdateTime)*0.000001;

		for (auto& ant : m_Ants) {
			ant.update(deltaT);
		}

		m_LastUpdateTime = ofGetSystemTimeMicros();
	}

	void draw() {
		ofBackground(ofColor(0.0f, 0.0f, 0.0f));
		for (auto& ant : m_Ants) {
			ant.draw();
		}
	}

private:

	uint64_t m_LastUpdateTime;

	std::vector<Ant> m_Ants;

};


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		World world;


};
