#ifndef STARTSCREENVIEW_HPP
#define STARTSCREENVIEW_HPP

#include <gui_generated/startscreen_screen/StartScreenViewBase.hpp>
#include <gui/startscreen_screen/StartScreenPresenter.hpp>
#include <gui/common/FrontendApplication.hpp>

#define CIRCEL_POSITIONS  20
#define CODE_NUMBERS       4
#define DELAY_MAX        100

class StartScreenView : public StartScreenViewBase
{
public:
    StartScreenView();
    virtual ~StartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void decrementValue();
    virtual void incrementValue();
    virtual void knopPressed();
    virtual void TickHandle();

protected:
    void UpdateNumberCircle(int32_t idx);

    FrontendApplication& frontendApplication()
    {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    int32_t  mWheelIdx;
    uint16_t mEntryCodeMatchCnt;
    int32_t  mDelayCnt;
};

#endif // STARTSCREENVIEW_HPP
