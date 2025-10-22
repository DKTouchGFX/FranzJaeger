#include <gui/startscreen_screen/StartScreenView.hpp>
#include <images/BitmapDatabase.hpp>
#include <gui/common/DataModel.hpp>

const uint16_t cBitmapNumberCirckeArr[CIRCEL_POSITIONS] =
{
		BITMAP_NUMBERCIRCLE1_ID,
		BITMAP_NUMBERCIRCLE2_ID,
		BITMAP_NUMBERCIRCLE3_ID,
		BITMAP_NUMBERCIRCLE4_ID,
		BITMAP_NUMBERCIRCLE5_ID,
		BITMAP_NUMBERCIRCLE6_ID,
		BITMAP_NUMBERCIRCLE7_ID,
		BITMAP_NUMBERCIRCLE8_ID,
		BITMAP_NUMBERCIRCLE9_ID,
		BITMAP_NUMBERCIRCLE10_ID,
		BITMAP_NUMBERCIRCLE11_ID,
		BITMAP_NUMBERCIRCLE12_ID,
		BITMAP_NUMBERCIRCLE13_ID,
		BITMAP_NUMBERCIRCLE14_ID,
		BITMAP_NUMBERCIRCLE15_ID,
		BITMAP_NUMBERCIRCLE16_ID,
		BITMAP_NUMBERCIRCLE17_ID,
		BITMAP_NUMBERCIRCLE18_ID,
		BITMAP_NUMBERCIRCLE19_ID,
		BITMAP_NUMBERCIRCLE20_ID
};

const uint16_t cEntryCodeSequence[CODE_NUMBERS] = { 4, 8, 12, 16 };

StartScreenView::StartScreenView()
{
	DataModel::getInstance()->SetNextQuote();
}

void StartScreenView::setupScreen()
{
    StartScreenViewBase::setupScreen();
	mWheelIdx = 0;
	mEntryCodeMatchCnt = 0;
	mDelayCnt = 0;

	NumberCircle.setBitmap(touchgfx::Bitmap(cBitmapNumberCirckeArr[mWheelIdx]));
	NumberCircle.invalidate();
}

void StartScreenView::tearDownScreen()
{
    StartScreenViewBase::tearDownScreen();
}

void StartScreenView::UpdateNumberCircle(int32_t idx)
{
	if ((idx >= 0) && (idx < CIRCEL_POSITIONS))
	{
		NumberCircle.setBitmap(touchgfx::Bitmap(cBitmapNumberCirckeArr[idx]));
		NumberCircle.invalidate();
	}
}

void StartScreenView::decrementValue()
{
    if (mWheelIdx > 0)
    {
    	mWheelIdx--;
    	UpdateNumberCircle(mWheelIdx);
    }
}
void StartScreenView::incrementValue()
{
    if (mWheelIdx < (CIRCEL_POSITIONS - 1))
    {
    	mWheelIdx++;
    	UpdateNumberCircle(mWheelIdx);
    }
}
void StartScreenView::knopPressed()
{
	if (cEntryCodeSequence[mEntryCodeMatchCnt] == (mWheelIdx + 1))
	{
		mEntryCodeMatchCnt++;
	}
	else
	{
		mEntryCodeMatchCnt = 0;
	}

	Led1.forceState(mEntryCodeMatchCnt >= 1);
	Led2.forceState(mEntryCodeMatchCnt >= 2);
	Led3.forceState(mEntryCodeMatchCnt >= 3);
	Led4.forceState(mEntryCodeMatchCnt >= 4);

	Led1.invalidate();
	Led2.invalidate();
	Led3.invalidate();
	Led4.invalidate();

	if (mEntryCodeMatchCnt >= CODE_NUMBERS)
	{
		mDelayCnt = DELAY_MAX;
	}
	else
	{
		mDelayCnt = 0;
	}
}

void StartScreenView::TickHandle()
{
    if (mDelayCnt > 0)
    {
    	mDelayCnt--;

    	if (mDelayCnt == 0)
    	{
    		frontendApplication().GotoScreenUnlockScreen();
    	}
    }
}

