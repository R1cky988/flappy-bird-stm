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

    isNightMode = false;
    isTransitioning = false;
    isGameOver = false;

    score = 0;
    Score.setWildcard(scoreBuffer);
    Unicode::snprintf(scoreBuffer, SCORE_SIZE, "%d", score);
    Score.invalidate();

    HighScore.setWildcard(highScoreBuffer);
    Unicode::snprintf(highScoreBuffer, SCORE_SIZE, "%d", savedHighScore);
    HighScore.invalidate();

    GameOverContainer.setVisible(false);
    GameOverContainer.invalidate();
}

void GameScreenView::tearDownScreen()
{
    GameScreenViewBase::tearDownScreen();
}

void GameScreenView::handleTickEvent()
{
	GameScreenViewBase::handleTickEvent();

	if (isTransitioning) {
		GameBackgroundDay.setVisible(!isNightMode);
		GameBackgroundNight.setVisible(isNightMode);

		GameBackgroundDay.invalidate();
		GameBackgroundNight.invalidate();

		isTransitioning = false;
	}

}

void GameScreenView::setGameOver()
{
    isGameOver = true;

    GameOverContainer.setVisible(true);
    GameOverContainer.invalidate();
}

void GameScreenView::toggleBackground()
{
	isNightMode = !isNightMode;
	isTransitioning = true;
}
