#include <gui/common/DataModel.hpp>
#include <gui/screenyvonne_screen/ScreenYvonneView.hpp>

ScreenYvonneView::ScreenYvonneView()
{

}

void ScreenYvonneView::setupScreen()
{
    ScreenYvonneViewBase::setupScreen();
}

void ScreenYvonneView::tearDownScreen()
{
    ScreenYvonneViewBase::tearDownScreen();
}

void ScreenYvonneView::Press()
{
	if (DataModel::getInstance()->IsQuoteCorrect(eMemYvonne) == true)
	{
		application().gotoScreenGoldBarScreenNoTransition();
	}
	else
	{
	    application().gotoScreenPrisonScreenNoTransition();
	}
}
