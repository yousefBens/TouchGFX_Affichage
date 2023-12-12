#ifndef TEMPERTUREVIEW_HPP
#define TEMPERTUREVIEW_HPP

#include <gui_generated/temperture_screen/tempertureViewBase.hpp>
#include <gui/temperture_screen/temperturePresenter.hpp>

class tempertureView : public tempertureViewBase
{
public:
    tempertureView();
    virtual ~tempertureView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPERTUREVIEW_HPP
