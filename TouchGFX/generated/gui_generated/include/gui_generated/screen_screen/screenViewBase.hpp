/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVIEWBASE_HPP
#define SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/progress_indicators/BoxProgress.hpp>
#include <touchgfx/mixins/Draggable.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class screenViewBase : public touchgfx::View<screenPresenter>
{
public:
    screenViewBase();
    virtual ~screenViewBase() {}
    virtual void setupScreen();
    virtual void handleTickEvent();
    virtual void afterTransition();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box boxBG;
    touchgfx::Draggable< touchgfx::FadeAnimator< touchgfx::TextArea > > textAreaHelloWorld;
    touchgfx::BoxProgress boxProgress1;

private:

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION1_DURATION = 30;
    uint16_t interaction1Counter;
    /*
     * Interaction Callback Declarations
     */
    touchgfx::Callback < screenViewBase, const touchgfx::FadeAnimator<touchgfx::TextArea>& >  interaction2EndedCallback;


    /*
     * Interaction Handlers
     */
    void interaction2EndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::TextArea>& comp);

};

#endif // SCREENVIEWBASE_HPP