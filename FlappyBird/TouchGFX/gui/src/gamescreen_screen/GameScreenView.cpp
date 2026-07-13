#include <gui/gamescreen_screen/GameScreenView.hpp>

extern "C"
{
    #include "cmsis_os2.h"
    extern osMessageQueueId_t birdQueueHandle;
    extern osMessageQueueId_t buzzerQueueHandle;
}

static int savedHighScore = 0;

GameScreenView::GameScreenView()
{

}

void GameScreenView::setupScreen()
{
    GameScreenViewBase::setupScreen();

}

void GameScreenView::tearDownScreen()
{
    GameScreenViewBase::tearDownScreen();
}

void GameScreenView::handleTickEvent()
{
	GameScreenViewBase::handleTickEvent();

}
