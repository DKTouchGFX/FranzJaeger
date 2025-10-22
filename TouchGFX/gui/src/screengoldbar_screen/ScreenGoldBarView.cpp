#include <gui/common/DataModel.hpp>
#include <gui/screengoldbar_screen/ScreenGoldBarView.hpp>

ScreenGoldBarView::ScreenGoldBarView()
{

}

void ScreenGoldBarView::setupScreen()
{
    ScreenGoldBarViewBase::setupScreen();
	DataModel::getInstance()->SetNextQuote();
}

void ScreenGoldBarView::tearDownScreen()
{
    ScreenGoldBarViewBase::tearDownScreen();
}
