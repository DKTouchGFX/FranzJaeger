#ifndef SCREENBENNYVIEW_HPP
#define SCREENBENNYVIEW_HPP

#include <gui_generated/screenbenny_screen/ScreenBennyViewBase.hpp>
#include <gui/screenbenny_screen/ScreenBennyPresenter.hpp>

class ScreenBennyView : public ScreenBennyViewBase
{
public:
    ScreenBennyView();
    virtual ~ScreenBennyView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Press();

protected:
};

#endif // SCREENBENNYVIEW_HPP
