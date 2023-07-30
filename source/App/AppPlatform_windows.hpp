/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp

	AppPlatform_windows.hpp

	The following code is licensed under the following license:
	< no license yet :( >
 ********************************************************************/

#pragma once

#include "compat/GL.hpp"
#include <ctime>
#include "Utils.hpp"
#include "AppPlatform.hpp"

#ifdef ORIGINAL_CODE
#error "This isn't original code. You probably shouldn't try to compile this"
#endif

// note: probably won't add AppPlatform_android until it's time
// to build an Android app

class AppPlatform_windows : public AppPlatform
{
public:
	void initConsts();
	void buyGame() override;
	void saveScreenshot(const std::string& fileName, int width, int height) override;
	int checkLicense() override;
	void createUserInput() override;
	std::vector<std::string> getUserInput() override;
	int getUserInputStatus() override;
	int getScreenWidth() const override;
	int getScreenHeight() const override;
	void showDialog(eDialogType) override;
	std::string getDateString(int time) override;
	Texture loadTexture(const std::string& str, bool b) override;
	std::vector<std::string>  getOptionStrings() override;

	// Also add these to allow proper turning within the game.
	void recenterMouse() override;
	void setMouseGrabbed(bool b) override;
	void getMouseDiff(int& x, int& y) override;
	void clearDiff() override;

	// Also add these to allow proper text input within the game.
	bool shiftPressed() override;
	void setShiftPressed(bool b);

	void setScreenSize(int width, int height);

private:
	int m_ScreenWidth;
	int m_ScreenHeight;

	std::vector<std::string> m_UserInput;
	int m_UserInputStatus = -1;

	bool m_bGrabbedMouse = false;
	bool m_bWasUnfocused = false;
	bool m_bShiftPressed = false;

	int m_MouseDiffX = 0, m_MouseDiffY = 0;
};

