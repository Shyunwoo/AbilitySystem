


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCPamrams)
{
	PlayerController = WCPamrams.PlayerController;
	PlayerState = WCPamrams.PlayerState;
	AbilitySystemComponent = WCPamrams.AbilitySystemComponent;
	AttributeSet = WCPamrams.AttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
}
