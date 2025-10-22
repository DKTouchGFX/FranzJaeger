#include <gui/common/DataModel.hpp>
#include <gui/screenprison_screen/ScreenPrisonView.hpp>

ScreenPrisonView::ScreenPrisonView()
{

}

void ScreenPrisonView::setupScreen()
{
    ScreenPrisonViewBase::setupScreen();
	DataModel::getInstance()->SetNextQuote();
}

void ScreenPrisonView::tearDownScreen()
{
    ScreenPrisonViewBase::tearDownScreen();
}
