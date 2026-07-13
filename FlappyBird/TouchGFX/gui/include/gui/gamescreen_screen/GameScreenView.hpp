#ifndef GAMESCREENVIEW_HPP
#define GAMESCREENVIEW_HPP

#include <gui_generated/gamescreen_screen/GameScreenViewBase.hpp>
#include <gui/gamescreen_screen/GameScreenPresenter.hpp>

class GameScreenView : public GameScreenViewBase
{
public:
    GameScreenView();
    virtual ~GameScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:

    int score;
    static constexpr uint16_t SCORE_SIZE = 4;
    Unicode::UnicodeChar scoreBuffer[SCORE_SIZE] = {0};
    Unicode::UnicodeChar highScoreBuffer[SCORE_SIZE] = { 0 };
    Unicode::UnicodeChar endScoreBuffer[SCORE_SIZE] = { 0 };

    bool isTransitioning;
    bool isGameOver;
    bool isNightMode = false;

    void setGameOver();
    void toggleBackground();

};

#endif // GAMESCREENVIEW_HPP
