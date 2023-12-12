/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/temperture_screen/tempertureViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

tempertureViewBase::tempertureViewBase() :
    flexButtonCallback(this, &tempertureViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_BACKGROUNDS_480X272_WAVY_LINES_ID));
    add(image1);

    flexButton1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(43, 50, 54), touchgfx::Color::getColorFromRGB(40, 46, 48), touchgfx::Color::getColorFromRGB(18, 19, 20), touchgfx::Color::getColorFromRGB(23, 24, 26));
    flexButton1.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_WEST_50_50_000000_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_WEST_50_50_000000_SVG_ID));
    flexButton1.setIconXY(0, 0);
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(0, 222, 50, 50);
    add(flexButton1);
}

tempertureViewBase::~tempertureViewBase()
{

}

void tempertureViewBase::setupScreen()
{

}

void tempertureViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen3
        //Go to Screen3 with screen transition towards East
        application().gotoScreen3ScreenSlideTransitionEast();
    }
}
