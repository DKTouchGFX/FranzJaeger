#ifndef SCREENBENNYPRESENTER_HPP
#define SCREENBENNYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenBennyView;

class ScreenBennyPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenBennyPresenter(ScreenBennyView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ScreenBennyPresenter() {}

private:
    ScreenBennyPresenter();

    ScreenBennyView& view;
};

#endif // SCREENBENNYPRESENTER_HPP
