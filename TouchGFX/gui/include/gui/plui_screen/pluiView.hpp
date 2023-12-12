#ifndef PLUIVIEW_HPP
#define PLUIVIEW_HPP

#include <gui_generated/plui_screen/pluiViewBase.hpp>
#include <gui/plui_screen/pluiPresenter.hpp>

class pluiView : public pluiViewBase
{
public:
    pluiView();
    virtual ~pluiView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PLUIVIEW_HPP
