#ifndef SCREENEGONVIEW_HPP
#define SCREENEGONVIEW_HPP

#include <gui_generated/screenegon_screen/ScreenEgonViewBase.hpp>
#include <gui/screenegon_screen/ScreenEgonPresenter.hpp>

class ScreenEgonView : public ScreenEgonViewBase
{
public:
    ScreenEgonView();
    virtual ~ScreenEgonView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Press();

protected:
};

#endif // SCREENEGONVIEW_HPP
