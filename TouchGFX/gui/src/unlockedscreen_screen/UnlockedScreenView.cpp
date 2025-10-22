#include <gui/common/DataModel.hpp>
#include <gui/unlockedscreen_screen/UnlockedScreenView.hpp>

UnlockedScreenView::UnlockedScreenView()
{
}

void UnlockedScreenView::setupScreen()
{
    UnlockedScreenViewBase::setupScreen();

    Quote.setTypedText(touchgfx::TypedText(DataModel::getInstance()->GetQuote()));
    Quote.invalidate();
}

void UnlockedScreenView::tearDownScreen()
{
    UnlockedScreenViewBase::tearDownScreen();
}
