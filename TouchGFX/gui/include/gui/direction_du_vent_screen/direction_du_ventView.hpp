#ifndef DIRECTION_DU_VENTVIEW_HPP
#define DIRECTION_DU_VENTVIEW_HPP

#include <gui_generated/direction_du_vent_screen/direction_du_ventViewBase.hpp>
#include <gui/direction_du_vent_screen/direction_du_ventPresenter.hpp>

class direction_du_ventView : public direction_du_ventViewBase
{
public:
    direction_du_ventView();
    virtual ~direction_du_ventView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DIRECTION_DU_VENTVIEW_HPP
