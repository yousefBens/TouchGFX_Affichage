#ifndef DIRECTION_DU_VENTPRESENTER_HPP
#define DIRECTION_DU_VENTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class direction_du_ventView;

class direction_du_ventPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    direction_du_ventPresenter(direction_du_ventView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~direction_du_ventPresenter() {}

private:
    direction_du_ventPresenter();

    direction_du_ventView& view;
};

#endif // DIRECTION_DU_VENTPRESENTER_HPP
