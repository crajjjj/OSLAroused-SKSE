#pragma once

#include "Managers/LibidoManager.h"

namespace ArousalManager
{
	float GetArousal(RE::Actor* actorRef, bool bUpdateState = true);
	float SetArousal(RE::Actor* actorRef, float value);
	float ModifyArousal(RE::Actor* actorRef, float value);

	float GetActorTimeRate(RE::Actor* actorRef, float timeSinceLastOrgasm);

	float GetSexlabExposure(RE::Actor* actorRef, float timePassed, bool bUpdateState = true);

	float CalculateArousal(RE::Actor* actorRef, float timePassed);
}
