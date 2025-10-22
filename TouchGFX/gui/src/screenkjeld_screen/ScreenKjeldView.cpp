#include <gui/common/DataModel.hpp>
#include <gui/screenkjeld_screen/ScreenKjeldView.hpp>

ScreenKjeldView::ScreenKjeldView()
{

}

void ScreenKjeldView::setupScreen()
{
    ScreenKjeldViewBase::setupScreen();
}

void ScreenKjeldView::tearDownScreen()
{
    ScreenKjeldViewBase::tearDownScreen();
}

void ScreenKjeldView::Press()
{
	if (DataModel::getInstance()->IsQuoteCorrect(eMemKjeld) == true)
	{
		application().gotoScreenGoldBarScreenNoTransition();
	}
	else
	{
	    application().gotoScreenPrisonScreenNoTransition();
	}
}
