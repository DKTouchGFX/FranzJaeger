#ifndef SCREENGOLDBARVIEW_HPP
#define SCREENGOLDBARVIEW_HPP

#include <gui_generated/screengoldbar_screen/ScreenGoldBarViewBase.hpp>
#include <gui/screengoldbar_screen/ScreenGoldBarPresenter.hpp>

class ScreenGoldBarView : public ScreenGoldBarViewBase
{
public:
    ScreenGoldBarView();
    virtual ~ScreenGoldBarView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENGOLDBARVIEW_HPP
