#include <gui/common/DataModel.hpp>
#include <gui/screenegon_screen/ScreenEgonView.hpp>

ScreenEgonView::ScreenEgonView()
{

}

void ScreenEgonView::setupScreen()
{
    ScreenEgonViewBase::setupScreen();
}

void ScreenEgonView::tearDownScreen()
{
    ScreenEgonViewBase::tearDownScreen();
}

void ScreenEgonView::Press()
{
	if (DataModel::getInstance()->IsQuoteCorrect(eMemEgon) == true)
	{
		application().gotoScreenGoldBarScreenNoTransition();
	}
	else
	{
	    application().gotoScreenPrisonScreenNoTransition();
	}
}
