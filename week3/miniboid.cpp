//
//  miniboid.cpp
//  mySketch-week3-1
//
// 
//

#include "miniboid.hpp"

miniboid::miniboid()
{
    separationWeight = 0.3f;
    cohesionWeight = 0.2f;
    alignmentWeight = 1.0f;
    
    separationThreshold = 10;
    neighbourhoodSize = 100;
    
    position = ofVec3f(ofRandom(0, 700), ofRandom(0, 400));
    velocity = ofVec3f(ofRandom(-2, 2), ofRandom(-2, 2));
}

void miniboid::draw(){
    ofSetColor(25, 10, 0);
    ofCircle(position.x, position.y, 15);
}
