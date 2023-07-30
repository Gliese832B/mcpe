#pragma once
#include <string>
#include "TripodCamera.hpp"

class LevelListener
{
public:
	virtual ~LevelListener() {}
	virtual void tileChanged(int, int, int);
	virtual void tileBrightnessChanged(int, int, int);
	virtual void setTilesDirty(int, int, int, int, int, int);
	virtual void allChanged();
	virtual void playSound(const std::string&, float, float, float, float, float);
	virtual void takePicture(TripodCamera*, Entity*);
	virtual void addParticle(const std::string&, float, float, float, float, float, float);
	virtual void playMusic(const std::string&, float, float, float, float);
	virtual void entityAdded(Entity*);
	virtual void entityRemoved(Entity*);
	virtual void skyColorChanged();
	virtual void playStreamingMusic(const std::string&, int, int, int);
};

