#ifndef SCREENKJELDVIEW_HPP
#define SCREENKJELDVIEW_HPP

#include <gui_generated/screenkjeld_screen/ScreenKjeldViewBase.hpp>
#include <gui/screenkjeld_screen/ScreenKjeldPresenter.hpp>

class ScreenKjeldView : public ScreenKjeldViewBase
{
public:
    ScreenKjeldView();
    virtual ~ScreenKjeldView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Press();

protected:
};

#endif // SCREENKJELDVIEW_HPP
