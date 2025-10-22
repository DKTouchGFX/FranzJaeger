#ifndef SCREENYVONNEVIEW_HPP
#define SCREENYVONNEVIEW_HPP

#include <gui_generated/screenyvonne_screen/ScreenYvonneViewBase.hpp>
#include <gui/screenyvonne_screen/ScreenYvonnePresenter.hpp>

class ScreenYvonneView : public ScreenYvonneViewBase
{
public:
    ScreenYvonneView();
    virtual ~ScreenYvonneView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Press();

protected:
};

#endif // SCREENYVONNEVIEW_HPP
