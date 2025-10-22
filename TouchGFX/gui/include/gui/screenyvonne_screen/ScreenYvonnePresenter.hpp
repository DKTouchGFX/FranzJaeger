#ifndef SCREENYVONNEPRESENTER_HPP
#define SCREENYVONNEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenYvonneView;

class ScreenYvonnePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenYvonnePresenter(ScreenYvonneView& v);

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

    virtual ~ScreenYvonnePresenter() {}

private:
    ScreenYvonnePresenter();

    ScreenYvonneView& view;
};

#endif // SCREENYVONNEPRESENTER_HPP
