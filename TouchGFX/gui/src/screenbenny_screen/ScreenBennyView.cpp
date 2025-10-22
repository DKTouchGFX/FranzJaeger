#include <gui/common/DataModel.hpp>
#include <gui/screenbenny_screen/ScreenBennyView.hpp>

ScreenBennyView::ScreenBennyView()
{

}

void ScreenBennyView::setupScreen()
{
    ScreenBennyViewBase::setupScreen();
}

void ScreenBennyView::tearDownScreen()
{
    ScreenBennyViewBase::tearDownScreen();
}

void ScreenBennyView::Press()
{
	if (DataModel::getInstance()->IsQuoteCorrect(eMemBenny) == true)
	{
		application().gotoScreenGoldBarScreenNoTransition();
	}
	else
	{
	    application().gotoScreenPrisonScreenNoTransition();
	}
}
