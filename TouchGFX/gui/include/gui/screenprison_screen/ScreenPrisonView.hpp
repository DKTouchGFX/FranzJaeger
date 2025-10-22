#ifndef SCREENPRISONVIEW_HPP
#define SCREENPRISONVIEW_HPP

#include <gui_generated/screenprison_screen/ScreenPrisonViewBase.hpp>
#include <gui/screenprison_screen/ScreenPrisonPresenter.hpp>

class ScreenPrisonView : public ScreenPrisonViewBase
{
public:
    ScreenPrisonView();
    virtual ~ScreenPrisonView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENPRISONVIEW_HPP
