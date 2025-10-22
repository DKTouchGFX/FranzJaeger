#ifndef SCREENEGONPRESENTER_HPP
#define SCREENEGONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenEgonView;

class ScreenEgonPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenEgonPresenter(ScreenEgonView& v);

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

    virtual ~ScreenEgonPresenter() {}

private:
    ScreenEgonPresenter();

    ScreenEgonView& view;
};

#endif // SCREENEGONPRESENTER_HPP
